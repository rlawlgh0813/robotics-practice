import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rcl_interfaces.msg import SetParametersResult


class SpeedController(Node):
    def __init__(self):
        super().__init__('speed_ctrl')

        self.declare_parameter('linear_speed', 1.0)
        self.declare_parameter('angular_speed', 0.0)

        self.linear = self.get_parameter('linear_speed').value
        self.angular = self.get_parameter('angular_speed').value

        self.add_on_set_parameters_callback(self.param_callback)

        self.pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.timer = self.create_timer(0.5, self.timer_cb)

    def param_callback(self, params):
        for param in params:
            if param.name == 'linear_speed':
                self.linear = param.value
                self.get_logger().info(f'linear_speed -> {param.value}')
            elif param.name == 'angular_speed':
                self.angular = param.value
                self.get_logger().info(f'angular_speed -> {param.value}')
        return SetParametersResult(successful=True)

    def timer_cb(self):
        msg = Twist()
        msg.linear.x = float(self.linear)
        msg.angular.z = float(self.angular)
        self.pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = SpeedController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()