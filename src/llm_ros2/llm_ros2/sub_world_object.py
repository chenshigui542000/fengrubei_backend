
from turtlesim.msg import Pose
import rclpy
from rclpy.node import Node
import time
import socket



from gazebo_msgs.msg import ModelStates

def msg2dict(msg):
    data = []
    index = 0
    for name in msg.name:
        data.append(
            {
                'name': name,
                'pose': {
                    'position': {
                        'x': msg.pose[index].position.x,
                        'y': msg.pose[index].position.y,
                        'z': msg.pose[index].position.z
                    },
                    'orientation': {
                        'x': msg.pose[index].orientation.x,
                        'y': msg.pose[index].orientation.y,
                        'z': msg.pose[index].orientation.z,
                        'w': msg.pose[index].orientation.w
                    }
                }
            }
        )

        index = index + 1
    return data


class PoseServer():
    def __init__(self):
        
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # 初始化
        self.sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        self.sock.bind(('192.168.200.130', 8003))  # 将套接字绑定到地址
        self.sock.listen(1)
        self.conn, addr = self.sock.accept()
        print(addr, 'has accepted...')

    def Sent(self, msg):
        data = msg2dict(msg=msg)
        self.conn.sendall(bytes(str(data), 'utf-8'))
        time.sleep(1)
        







class sub_world_node(Node):
    def __init__(self, name):
        super().__init__(name)
        self.poseServer = PoseServer()

        self.sub = self.create_subscription(ModelStates,
                                            "/model_states_demo",
                                            self.handle_listen,
                                            10)

    def handle_listen(self, msg):
        #do something
        self.poseServer.Sent(msg)
        time.sleep(0.1)




def main(args=None):
    rclpy.init(args=args)
    node = sub_world_node("sub_world_object")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
