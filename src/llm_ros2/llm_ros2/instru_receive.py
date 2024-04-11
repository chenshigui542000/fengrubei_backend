import socket
import cv2
import numpy
import time
import os
from turtlesim.msg import Pose
import rclpy
from rclpy.node import Node
import time
import socket

camera = cv2.VideoCapture(0)

FileName = "image.jpg"


class instru_receive_server:
    def __init__(self):
        # 连接服务器（初始化）
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # 初始化
        self.sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        self.sock.bind(('10.192.95.137', 8002))  # 将套接字绑定到地址
        self.sock.listen(1)

    def Get(self):
        conn, addr = self.sock.accept()
        print(addr, '已连接...')


        while True:
            file_info = conn.recv(10)  # 这个数字要大于图片的长宽之积，否则会报错

            if len(str(file_info, 'utf-8').split('|')) == 2:
                status, file_size = str(file_info, 'utf-8').split('|')
                file_size = int(file_size)
                f = open(Store_img_path, 'wb')

                has_receiced = 0

                while has_receiced != file_size:

                    data = conn.recv(1024)

                    has_receiced = has_receiced + len(data)
                    f.write(data)

                f.close()

            img = cv2.imread(Store_img_path)
            # detectImageAndShow(img)
            cv2.imshow("image", img)
            cv2.waitKey(10)


        self.sock.close()


class instru_server(Node):
    def __init__(self, name):
        super().__init__(name)
        vc = instru_receive_server()
        vc.Get()


def main(args=None):
    rclpy.init(args=args)
    node = instru_server("instru_receive")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
