import socket
import cv2
import numpy
import time
import json
import os
from turtlesim.msg import Pose
import rclpy
from rclpy.node import Node
import time
import socket

from interfaces.msg import Position





class instru_receive_server:
    def __init__(self, prior):

        self.prior = prior
        # 连接服务器（初始化）
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # 初始化
        self.sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        self.sock.bind(('192.168.200.130', 8002))  # 将套接字绑定到地址
        self.sock.listen(1)

    def Get(self):
        conn, addr = self.sock.accept()
        print(addr, '已连接...')


        while True:
            file_info = conn.recv(1024)  
            instru = str(file_info, 'utf-8')
            print(instru)
            instru_dict = eval(instru)

            print(instru_dict)
            type = instru_dict["type"]
            position = instru_dict["position"]

            if type == 1:
                aim_position = Position()
                aim_position.x = position["x"]
                aim_position.y = position["y"]
                aim_position.z = position["z"]

                self.prior.pub_catch.publish(aim_position)
            elif type == 2:
                aim_position = Position()
                aim_position.x = position["x"]
                aim_position.y = position["y"]
                aim_position.z = position["z"]

                self.prior.pub_putdown.publish(aim_position)


            


        self.sock.close()


class instru_server(Node):
    def __init__(self, name):
        super().__init__(name)

        self.pub_catch = self.create_publisher(
            Position,
            "catch_object_position",
            10
        )

        self.pub_putdown = self.create_publisher(
            Position,
            "putdown_object_position",
            10
        )
        vc = instru_receive_server(self)
        vc.Get()


def main(args=None):
    rclpy.init(args=args)
    node = instru_server("instru_receive")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
