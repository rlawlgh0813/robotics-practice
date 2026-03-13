import select
import sys

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from geometry_msgs.msg import Pose2D
from my_action_interfaces.action import PatrolTest


class PatrolActionClient(Node):
    def __init__(self):
        super().__init__('patrol_action_client')

        self.client = ActionClient(
            self,
            PatrolTest,
            'patrol'
        )

        self._goal_handle = None

        self.create_timer(0.1, self.check_keyboard)

    def send_goal(self):
        goal_msg = PatrolTest.Goal()

        goal_msg.waypoints = [
            Pose2D(x=2.0, y=2.0, theta=0.0),
            Pose2D(x=8.0, y=2.0, theta=0.0),
            Pose2D(x=8.0, y=8.0, theta=0.0),
            Pose2D(x=2.0, y=8.0, theta=0.0),
        ]
        goal_msg.tolerance = 0.3

        self.client.wait_for_server()
        self.get_logger().info('Sending patrol goal')
        self.get_logger().info('Press ENTER to cancel the patrol')

        send_future = self.client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        send_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        self._goal_handle = future.result()

        if not self._goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

    def check_keyboard(self):
        if self._goal_handle is None:
            return

        if select.select([sys.stdin], [], [], 0)[0]:
            input()
            self.cancel_goal()

    def cancel_goal(self):
        if self._goal_handle is not None:
            self.get_logger().warn('Cancelling patrol goal')
            self._goal_handle.cancel_goal_async()
            self._goal_handle = None

    def feedback_callback(self, feedback_msg):
        fb = feedback_msg.feedback
        self.get_logger().info(
            f'Feedback: waypoint={fb.current_index}, '
            f'remaining={fb.remaining_distance:.2f}'
        )


def main():
    rclpy.init()
    node = PatrolActionClient()
    node.send_goal()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()