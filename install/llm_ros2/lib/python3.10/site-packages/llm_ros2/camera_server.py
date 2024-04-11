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


class VideoClient:
    def __init__(self):
        # 连接服务器（初始化）
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.connect(('10.192.95.137', 8002))

    def Send(self):

        while True:
            success, frame = camera.read()
            if success:

                cv2.imwrite(FileName, frame)

                img_size = os.stat(FileName).st_size

                status = "done"
                file_info = '%s|%s' % (status, str(img_size))
                self.sock.sendall(bytes(file_info, 'utf-8'))

                send_size = 0
                with open(FileName, "rb") as file:
                    while send_size < img_size:
                        data = file.read(1024)
                        self.sock.sendall(data)
                        send_size = send_size + len(data)

                time.sleep(0.01)
                print('已成功发送%3d.jpg,睡眠1秒')

        self.sock.close()


class Camera_server(Node):
    def __init__(self, name):
        super().__init__(name)
        vc = VideoClient()
        vc.Send()


def main(args=None):
    rclpy.init(args=args)
    node = Camera_server("camera_server")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
