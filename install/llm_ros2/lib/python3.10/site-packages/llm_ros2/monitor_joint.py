from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from sensor_msgs.msg import JointState
import rclpy
from rclpy.node import Node
import time
import socket
from std_msgs.msg import Float64MultiArray
from trajectory_msgs.msg import JointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint
from rclpy.time import Duration
from rclpy.action import ActionClient


class monitor_joint_node(Node):
    def __init__(self, name):
        super().__init__(name)

        self.sub = self.create_subscription(
            JointTrajectory,
            "/joint_trajectory_controller/joint_trajectory",
            self.handle_listen,
            10
        )

    def handle_listen(self, msg):
        print(msg)



def main(args=None):
    rclpy.init(args=args)
    node = monitor_joint_node("jonitor_joint_node")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()