from scipy.spatial.transform import Rotation as R
import numpy
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
from builtin_interfaces.msg import Time
from tf2_msgs.msg import TFMessage
from nav_msgs.msg import Odometry
from interfaces.msg import Matrix

def quaternion2rot(quaternion, transition):
    r = R.from_quat(quaternion)
    rot = r.as_matrix()
    res = numpy.array(
        [
            [rot[0][0], rot[0][1], rot[0][2], transition.x],
            [rot[1][0], rot[1][1], rot[1][2], transition.y],
            [rot[2][0], rot[2][1], rot[2][2], transition.z],
            [0.0, 0.0, 0.0, 1.0],

        ]
    )
    return res









class calculate_matrix(Node):
    def __init__(self, name):
        super().__init__(name)

        self.sub_tf = self.create_subscription(
            TFMessage,
            "/tf",
            self.handle_sub_tf,
            10
        )

        self.sub_odom = self.create_subscription(
            Odometry,
            "/odom",
            self.handle_sub_odom,
            10
        )

        self.pub_world_R_link1_matrix = self.create_publisher(
            Matrix,
            "pub_world_R_link1_matrix",
            10
        )


        self.timer = self.create_timer(0.4, self.handle_pub)

        self.baseLink_R_world_matrix = numpy.zeros((4,4))
        self.base_R_baseLink_matrix = numpy.array([
            [1,0,0,0],
            [0,1,0,0],
            [0,0,1,0.05],
            [0,0,0,1]
        ])
        self.link1_R_base_matrix = numpy.array([
            [1,0,0,0.15],
            [0,1,0,0],
            [0,0,1,0.15],
            [0,0,0,1]

        ])
        self.link2_R_link1_position = [
            [0],
            [0],
            [0.0001],
            [1]
        ]

        self.world_R_world_position = [
            [0],
            [0],
            [0],
            [1.0]
        ]

    def get_world_R_link1_matrix(self):
        tmp_matrix1 = numpy.dot(self.baseLink_R_world_matrix, self.base_R_baseLink_matrix)
        tmp_matrix2 = numpy.dot(tmp_matrix1, self.link1_R_base_matrix)
        world_R_link1_matrix = numpy.linalg.inv(tmp_matrix2)
        return world_R_link1_matrix
    
    def get_link1_R_world_matrix(self):
        tmp_matrix1 = numpy.dot(self.baseLink_R_world_matrix, self.base_R_baseLink_matrix)
        tmp_matrix2 = numpy.dot(tmp_matrix1, self.link1_R_base_matrix)
        return tmp_matrix2
    
    def get_current_link2_R_world_position(self):
        link1_R_world_matrix = self.get_link1_R_world_matrix()
        link2_R_world_position = numpy.dot(link1_R_world_matrix, self.link2_R_link1_position)
        return link2_R_world_position
        

    def handle_pub(self):
        link2_R_world_position = self.get_current_link2_R_world_position()

        world_R_link1_matrix = self.get_world_R_link1_matrix()
        world_R_link1_position = numpy.dot(world_R_link1_matrix, self.world_R_world_position)
        print("link2_R_world_position : x = %f y = %f z = %f" % (link2_R_world_position[0][0], link2_R_world_position[1][0],link2_R_world_position[2][0]))
        print("world_R_link1_position : x = %f y = %f z = %f" % (world_R_link1_position[0][0],world_R_link1_position[1][0],world_R_link1_position[2][0]))
        print("---------------------")

        matrix = Matrix()
        matrix.firstline = [world_R_link1_matrix[0][0],world_R_link1_matrix[0][1],world_R_link1_matrix[0][2],world_R_link1_matrix[0][3]]
        matrix.secondline = [world_R_link1_matrix[1][0],world_R_link1_matrix[1][1],world_R_link1_matrix[1][2],world_R_link1_matrix[1][3]]
        matrix.thirdline = [world_R_link1_matrix[2][0],world_R_link1_matrix[2][1],world_R_link1_matrix[2][2],world_R_link1_matrix[2][3]]
        matrix.forthline = [world_R_link1_matrix[3][0],world_R_link1_matrix[3][1],world_R_link1_matrix[3][2],world_R_link1_matrix[3][3]]

        self.pub_world_R_link1_matrix.publish(matrix)
        


        
        

    def handle_sub_tf(self,msg):
    
        count = len(msg.transforms)
        i = 0
        for i in range(0, count):
            frame_id = msg.transforms[i].header.frame_id
            child_frame_id = msg.transforms[i].child_frame_id
            
        
            if (frame_id == "base") and (child_frame_id == "link1"):
                translation = msg.transforms[i].transform.translation
                rotation    = msg.transforms[i].transform.rotation
                quaternion  = [rotation.x, rotation.y, rotation.z, rotation.w]

                # self.link1_R_base_matrix = quaternion2rot(quaternion, translation)
                # print("link1_R_base_matrix = ",link1_R_base_matrix)

    

    def handle_sub_odom(self,msg):
        position = msg.pose.pose.position
        orientation = msg.pose.pose.orientation

        orientation_x = orientation.x
        orientation_y = orientation.y
        orientation_z = orientation.z
        orientation_w = orientation.w

        quaternion = [orientation_x, orientation_y, orientation_z, orientation_w]


        self.baseLink_R_world_matrix = quaternion2rot(quaternion, position)
        # print(baseLink_R_world_matrix)
        

        




        




def main(args=None):
    rclpy.init(args=args)
    node = calculate_matrix("calculate_matrix")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()




