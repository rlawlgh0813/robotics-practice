import rclpy
from rclpy.node import Node

from smart_shop_interfaces.msg import OrderLog


class LogMonitor(Node):
    def __init__(self):
        super().__init__('log_monitor')

        self.success_count = 0
        self.fail_count = 0

        self.sub = self.create_subscription(
            OrderLog,
            'order_log',
            self.cb_order_log,
            10
        )

        self.get_logger().info('LogMonitor ready. Subscribing to /order_log')

    def cb_order_log(self, msg):
        if msg.success:
            self.success_count += 1
            result_text = 'SUCCESS'
        else:
            self.fail_count += 1
            result_text = 'FAILED '

        print(
            f'[{msg.timestamp}] {msg.order_id} | '
            f'{msg.item_id} x{msg.quantity} | '
            f'{msg.amount} KRW | '
            f'{result_text} | {msg.detail}'
        )
        print(
            f'  -> cumulative count | success: {self.success_count}, '
            f'failed: {self.fail_count}'
        )


def main():
    rclpy.init()
    node = LogMonitor()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()