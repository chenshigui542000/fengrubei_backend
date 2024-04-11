
from turtlesim.msg import Pose
import rclpy
from rclpy.node import Node
import time
import socket



class PoseServer():
    def __init__(self):
        print("hello")
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # 初始化
        self.sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        print("hello")
        self.sock.bind(('172.17.60.229', 8188))  # 将套接字绑定到地址
        self.sock.listen(1)
        print("hello")
        self.conn, addr = self.sock.accept()
        print(addr, 'has accepted...')

    def Sent(self, msg):
        print(msg)
        pose = {'x':msg.x, 
                'y':msg.y, 
                'theta':msg.theta,
                'linear_velocity': msg.linear_velocity, 
                'angular_velocity':msg.angular_velocity}
        self.conn.sendall(bytes(str(pose), 'utf-8'))







class sub_pose_node(Node):
    def __init__(self, name):
        super().__init__(name)
        self.poseServer = PoseServer()

        self.sub = self.create_subscription(Pose,
                                            "/turtle1/pose",
                                            self.handle_listen,
                                            10)

    def handle_listen(self, msg):
        #do something
        self.poseServer.Sent(msg)
        time.sleep(0.1)




def main(args=None):
    rclpy.init(args=args)
    node = sub_pose_node("sub_pose")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
