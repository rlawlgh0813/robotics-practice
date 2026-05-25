import rclpy
from rclpy.node import Node

from smart_shop_interfaces.srv import DiscountApply


class DiscountServer(Node):
    def __init__(self):
        super().__init__('discount_server')
        self.srv = self.create_service(
            DiscountApply,
            'apply_discount',
            self.cb_apply_discount
        )

        self.get_logger().info('DiscountServer ready.')

    def cb_apply_discount(self, request, response):
        item_id = request.item_id
        original_amount = request.original_amount

        discount_rate = 0

        if item_id == 'cup':
            discount_rate = 10
        elif item_id == 'snack':
            discount_rate = 20
        elif item_id == 'bottle':
            discount_rate = 0
        else:
            discount_rate = 0

        discounted_amount = original_amount * (100 - discount_rate) // 100

        response.discounted_amount = discounted_amount
        response.discount_rate = discount_rate
        response.reason = 'ok'

        self.get_logger().info(
            f'Discount applied: item={item_id}, original={original_amount}, '
            f'rate={discount_rate}%, discounted={discounted_amount}'
        )

        return response


def main():
    rclpy.init()
    node = DiscountServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()