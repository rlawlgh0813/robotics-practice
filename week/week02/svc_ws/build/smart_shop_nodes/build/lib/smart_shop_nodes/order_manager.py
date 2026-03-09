import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from smart_shop_interfaces.srv import (
    PlaceOrder,
    CheckStock,
    AuthorizePayment,
    DiscountApply,
)


class OrderManager(Node):
    def __init__(self):
        super().__init__('order_manager')

        self.cb_group = ReentrantCallbackGroup()

        self.srv = self.create_service(
            PlaceOrder,
            'place_order',
            self.cb_place_order,
            callback_group=self.cb_group
        )

        self.stock_cli = self.create_client(
            CheckStock,
            'check_stock',
            callback_group=self.cb_group
        )

        self.disc_cli = self.create_client(
            DiscountApply,
            'apply_discount',
            callback_group=self.cb_group
        )

        self.pay_cli = self.create_client(
            AuthorizePayment,
            'authorize_payment',
            callback_group=self.cb_group
        )

        self.get_logger().info('OrderManager ready (with discount).')

    def wait_service_or_fail(self, client, name, timeout_sec=3.0):
        if not client.wait_for_service(timeout_sec=timeout_sec):
            self.get_logger().error(f'service not available: {name}')
            return False
        return True

    def cb_place_order(self, request, response):
        self.get_logger().info(
            f"Order received: order_id={request.order_id}, "
            f"item={request.item_id}, qty={request.quantity}, "
            f"amount={request.amount} {request.currency}"
        )

        # 1) 재고 서비스 확인
        if not self.wait_service_or_fail(self.stock_cli, 'check_stock'):
            response.success = False
            response.status = 'dependency_unavailable'
            response.detail = 'check_stock not available'
            response.remaining_stock = 0
            response.payment_auth_code = ''
            return response

        # 2) 할인 서비스 확인
        if not self.wait_service_or_fail(self.disc_cli, 'apply_discount'):
            response.success = False
            response.status = 'dependency_unavailable'
            response.detail = 'apply_discount not available'
            response.remaining_stock = 0
            response.payment_auth_code = ''
            return response

        # 3) 결제 서비스 확인
        if not self.wait_service_or_fail(self.pay_cli, 'authorize_payment'):
            response.success = False
            response.status = 'dependency_unavailable'
            response.detail = 'authorize_payment not available'
            response.remaining_stock = 0
            response.payment_auth_code = ''
            return response

        # 재고 확인
        stock_req = CheckStock.Request()
        stock_req.item_id = request.item_id
        stock_req.quantity = request.quantity

        stock_res = self.stock_cli.call(stock_req)

        if not stock_res.available:
            self.get_logger().warning(
                f"Order rejected (stock): item={request.item_id}, "
                f"requested={request.quantity}, available={stock_res.remaining}"
            )

            response.success = False
            response.status = 'rejected'
            response.detail = f'stock: {stock_res.reason}'
            response.remaining_stock = stock_res.remaining
            response.payment_auth_code = ''
            return response

        # 할인 적용
        disc_req = DiscountApply.Request()
        disc_req.item_id = request.item_id
        disc_req.original_amount = request.amount

        disc_res = self.disc_cli.call(disc_req)

        discounted_amount = disc_res.discounted_amount
        discount_rate = disc_res.discount_rate

        self.get_logger().info(
            f'Discount result: item={request.item_id}, '
            f'rate={discount_rate}%, discounted={discounted_amount}'
        )

        # 할인된 금액으로 결제 승인
        pay_req = AuthorizePayment.Request()
        pay_req.order_id = request.order_id
        pay_req.amount = discounted_amount
        pay_req.currency = request.currency

        pay_res = self.pay_cli.call(pay_req)

        if not pay_res.approved:
            self.get_logger().warning(
                f"Order rejected (payment): order_id={request.order_id}"
            )

            response.success = False
            response.status = 'rejected'
            response.detail = (
                f'payment: {pay_res.reason} '
                f'(discount: {discount_rate}%, final: {discounted_amount} {request.currency})'
            )
            response.remaining_stock = stock_res.remaining
            response.payment_auth_code = ''
            return response

        response.success = True
        response.status = 'approved'
        response.detail = (
            f'order accepted (discount: {discount_rate}%, '
            f'final: {discounted_amount} {request.currency})'
        )
        response.remaining_stock = stock_res.remaining
        response.payment_auth_code = pay_res.auth_code

        self.get_logger().info(
            f"Order approved: order_id={request.order_id}, "
            f"auth={pay_res.auth_code}, remaining={stock_res.remaining}, "
            f"discount={discount_rate}%, final={discounted_amount}"
        )

        return response


def main():
    rclpy.init()
    node = OrderManager()

    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()