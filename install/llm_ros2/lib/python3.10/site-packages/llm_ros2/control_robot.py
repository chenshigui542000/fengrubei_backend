
import  os;
import  re;
import  sys;





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
import numpy
from interfaces.msg import Matrix
from interfaces.msg import Position
import math
from control_msgs.action import FollowJointTrajectory

# arm para
M_PI = 3.1415926

link1_len = 0.10
l1 = 0.14
l2 = 0.22
l3 = 0.10

link5_len = 0.06
link6_len = 0.02
left_gripper_len = 0.04
right_gripper_len = 0.04

link5_plus_link6_plus_gripper = link5_len + link6_len + left_gripper_len + 0.016
theta1_upper = math.pi / 3 * 2
theta1_lower = - math.pi / 3 * 2
theta2_upper = math.pi / 3 * 2
theta2_lower = - math.pi / 3 * 2
theta3_upper = math.pi / 3 * 2
theta3_lower = - math.pi / 3 * 2



#control para
set_catch_link_robot_distance = 0.4

degree_error_range_first_level= 1  
degree_error_range_second_level = 10
degree_error_range_third_level = 30

distance_error_range_first_level = 0.0005
distance_error_range_second_level = 0.05
distance_error_range_third_level = 0.2


class ctl_robot_node(Node):
    def __init__(self, name):
        super().__init__(name)

        
        self.catch_link_postion_R_world = None
        self.putdown_link_position_R_world = None

    
        self.action_client = ActionClient(
            self,
            FollowJointTrajectory,
            '/joint_trajectory_controller/follow_joint_trajectory',
        )

        self.pubJoint = self.create_publisher(JointTrajectory,
                                              "/joint_trajectory_controller/joint_trajectory",
                                              10)
        
        self.timer = self.create_timer(0.2, self.handle_catch_object)
        self.timer = self.create_timer(0.2, self.handle_putdown_object)
        
        self.sub_aim_position = self.create_subscription(
            Position,
            "catch_object_position",
            self.handle_catch_object_position,
            10
        )

        self.sub_putdown_position = self.create_subscription(
            Position,
            "putdown_object_position",
            self.receive_putdown_object_position,
            10
        )

        self.pubBase = self.create_publisher(Twist,
                                            "/cmd_vel",
                                            10)
        self.world_R_link1_matrix = numpy.zeros((4,4))

        self.sub_world_R_link1_matrix = self.create_subscription(
            Matrix,
            "pub_world_R_link1_matrix",
            self.listen_world_R_link1_matrix,
            10
        )
        self.flag = 0

#---------------------fun tools-------------------------
    def listen_world_R_link1_matrix(self, msg):
        firstLine = msg.firstline
        secondLine = msg.secondline
        thirdline = msg.thirdline
        forthline = msg.forthline



        self.world_R_link1_matrix = numpy.array([
            firstLine,
            secondLine,
            thirdline,
            forthline
        ])
    

    def get_catch_link_R_link1_position(self, object_position_R_world):
        catch_link_R_link1_position = numpy.dot(self.world_R_link1_matrix, object_position_R_world)

        return catch_link_R_link1_position

        
    def get_catch_link_R_link1_degrees(self, object_position_R_world):
        catch_link_R_link1_position = self.get_catch_link_R_link1_position(object_position_R_world)
        position_x = catch_link_R_link1_position[0][0]
        position_y = catch_link_R_link1_position[1][0]
        distance = math.sqrt(position_x * position_x + position_y * position_y)
        sin_radian = position_y / distance

        radian  = math.asin(sin_radian)

        degrees = math.degrees(radian)
        print("degrees = ",degrees)
        print("------------------------------")

        return degrees
    
    def get_catch_link_R_link1_distance(self, object_position_R_world):
        catch_link_R_link1_position = self.get_catch_link_R_link1_position(object_position_R_world)
        position_x = catch_link_R_link1_position[0][0]
        position_y = catch_link_R_link1_position[1][0]
        distance = math.sqrt(position_x * position_x + position_y * position_y)

        return distance
    

    def pub_stop_command(self):
        base_vel = Twist()
        base_vel.angular.x = 0.0
        base_vel.angular.y = 0.0
        base_vel.angular.z = 0.0
        base_vel.linear.x  = 0.0
        base_vel.linear.y  = 0.0
        base_vel.linear.z  = 0.0

        self.pubBase.publish(base_vel)

    
    def judge_robot_achieve_aim_position(self, object_position_R_world):

        degrees = self.get_catch_link_R_link1_degrees(object_position_R_world)

        distance = self.get_catch_link_R_link1_distance(object_position_R_world)

        if (math.fabs(degrees) >= degree_error_range_first_level) or (math.fabs(distance) >= (distance_error_range_first_level + set_catch_link_robot_distance)):

            return False

        else:
            return True

#-------------------------handle_catch_object------------------------------------------------------

    def handle_catch_object(self):
        if self.catch_link_postion_R_world == None : return

        

        success_achieve_position = self.judge_robot_achieve_aim_position(self.catch_link_postion_R_world)

        if(success_achieve_position == False or self.flag < 10):
            print("goto aim position")
            if(success_achieve_position == False):
                self.handle_goto_aim_position(self.catch_link_postion_R_world)
            else:
                self.pub_stop_command()
                self.flag = self.flag + 1
        else:
            print("handle_arm_control")
            self.handle_arm_control()
            self.catch_link_postion_R_world = None
            self.flag = 0
        
        
        


    
    def handle_catch_object_position(self, msg):
        self.flag = 0
        
        x = msg.x
        y = msg.y
        z = msg.z

        aim_position = [
            [x],
            [y],
            [z],
            [1.0]
        ]

        self.catch_link_postion_R_world = aim_position

        


#----------------------handle_put_down_object------------------------------
    

    def handle_putdown_object(self):
        if self.putdown_link_position_R_world == None : return


        success_achieve_position = self.judge_robot_achieve_aim_position(self.putdown_link_position_R_world)

        if(success_achieve_position == False or self.flag < 10):
            print("goto aim position")
            if(success_achieve_position == False):
                self.handle_goto_aim_position(self.putdown_link_position_R_world)
            else:
                self.pub_stop_command()
                self.flag = self.flag + 1
        else:
            print("handle_arm_control")
            self.handle_putdown_object_arm_control()
            self.putdown_link_position_R_world = None
            self.flag = 0



    def receive_putdown_object_position(self,msg):
        self.flag = 0
        x = msg.x
        y = msg.y
        z = msg.z

        self.putdown_link_position_R_world = [
            [x],
            [y],
            [z],
            [1.0]
        ]
        

        
            


#-----------------------handle_arm_control---------------------------------
        
    def achieve_grasp_position(self, points):
        for point in points:
            control_arm_info = JointTrajectory()
            control_arm_info.points.append(point)
            control_arm_info.header.stamp = Time(sec=0,nanosec=0)
            control_arm_info.joint_names =  ["joint1","joint2","joint3","joint4","joint5","joint6"]
            
            goal_msg = FollowJointTrajectory.Goal()
            goal_msg.trajectory = control_arm_info

            self.action_client.wait_for_server()
            self._send_goal_future = self.action_client.send_goal_async(goal_msg)
            self._send_goal_future.add_done_callback(self.goal_response_callback)
            time.sleep(2)
    
    #-------------------grasp_object---------------------------------
    def grasp_object(self):
        control_arm_info = JointTrajectory()
            
        control_arm_info.header.stamp = Time(sec=0,nanosec=0)
        control_arm_info.joint_names =  ["gripper_joint1","gripper_joint2"]
        
        point = JointTrajectoryPoint()
        point.positions = [0.0185, 0.0185]

        point.velocities = [0.05,0.05]

        
        point.time_from_start = Duration(seconds=1.0).to_msg()

        control_arm_info.points.append(point)

        goal_msg = FollowJointTrajectory.Goal()
        goal_msg.trajectory = control_arm_info

        self.action_client.wait_for_server()
        self._send_goal_future = self.action_client.send_goal_async(goal_msg)
        self._send_goal_future.add_done_callback(self.goal_response_callback)
        time.sleep(2)

    def loosen_object(self):
        control_arm_info = JointTrajectory()
            
        control_arm_info.header.stamp = Time(sec=0,nanosec=0)
        control_arm_info.joint_names =  ["gripper_joint1","gripper_joint2"]
        
        point = JointTrajectoryPoint()
        point.positions = [0.0, 0.0]

        point.velocities = [0.05,0.05]

        
        point.time_from_start = Duration(seconds=1.0).to_msg()

        control_arm_info.points.append(point)

        goal_msg = FollowJointTrajectory.Goal()
        goal_msg.trajectory = control_arm_info

        self.action_client.wait_for_server()
        self._send_goal_future = self.action_client.send_goal_async(goal_msg)
        self._send_goal_future.add_done_callback(self.goal_response_callback)
        time.sleep(2)


    #-------------------lift_object--------------------------------------
    def lift_object(self, points):
        point = points[0]
        point.positions = [0.0,0.0,0.0,0.0,0.0,0.0]
        

        control_arm_info = JointTrajectory()
        control_arm_info.points.append(point)
        control_arm_info.header.stamp = Time(sec=0,nanosec=0)
        control_arm_info.joint_names =  ["joint1","joint2","joint3","joint4","joint5","joint6"]
        
        goal_msg = FollowJointTrajectory.Goal()
        goal_msg.trajectory = control_arm_info

        self.action_client.wait_for_server()
        self._send_goal_future = self.action_client.send_goal_async(goal_msg)
        self._send_goal_future.add_done_callback(self.goal_response_callback)
        time.sleep(2)

    #------------------------------------------------------------------------

    def handle_arm_control(self):

        catch_link_R_link1 = self.get_catch_link_R_link1_position(self.catch_link_postion_R_world)
        catch_link_x = 0
        
        catcg_link_z = catch_link_R_link1[2][0]

        vertical_flag = 0

        if math.fabs(self.catch_link_postion_R_world[2][0]) <= 0.01:
            vertical_flag = 1
            catcg_link_z = catcg_link_z + link5_plus_link6_plus_gripper 
            catch_link_y = set_catch_link_robot_distance - 0.1

            
        else:
            catch_link_y = set_catch_link_robot_distance - 0.1 - link5_plus_link6_plus_gripper + 0.02


        print("catch_y ", catch_link_y)
        print("catch_z ",catcg_link_z )

        res = calculate_arm_pose(catch_link_y  , catcg_link_z, vertical_flag)


        if res['success']:

            points = res['content']

        #-------------------achieve_grasp_position----------------------
            self.achieve_grasp_position(points)

        #------------------begin_grasp_object----------------------------
            self.grasp_object()
            
        #------------------lift_object-------------------------------------
            
            
            self.lift_object(points)

    
    def handle_putdown_object_arm_control(self):

        catch_link_R_link1 = self.get_catch_link_R_link1_position(self.putdown_link_position_R_world)
        catch_link_x = 0
        
        catcg_link_z = catch_link_R_link1[2][0]

        vertical_flag = 0

        if math.fabs(self.putdown_link_position_R_world[2][0]) <= 0.01:
            vertical_flag = 1
            catcg_link_z = catcg_link_z + link5_plus_link6_plus_gripper
            catch_link_y = set_catch_link_robot_distance - 0.1
            
        else:
            catch_link_y = set_catch_link_robot_distance - 0.1 - link5_plus_link6_plus_gripper + 0.02


        print("catch_y ", catch_link_y)
        print("catch_z ",catcg_link_z )

        res = calculate_arm_pose(catch_link_y  , catcg_link_z, vertical_flag)


        if res['success']:

            points = res['content']

        #-------------------achieve_grasp_position----------------------
            self.achieve_grasp_position(points)

        #------------------begin_grasp_object----------------------------
            self.loosen_object()
            
        #------------------lift_object-------------------------------------
            
            
            self.lift_object(points)



            

#------------------------handle_goto_aim_position---------------------------------------
    def handle_goto_aim_position(self, object_position_R_world):

        
        base_vel = Twist()
        base_vel.angular.x = 0.0
        base_vel.angular.y = 0.0
        base_vel.angular.z = 0.0
        base_vel.linear.x  = 0.0
        base_vel.linear.y  = 0.0
        base_vel.linear.z  = 0.0


        degrees = self.get_catch_link_R_link1_degrees(object_position_R_world)
        distance = self.get_catch_link_R_link1_distance(object_position_R_world)
        #is have finished turn then begin move
        if math.fabs(degrees) < 1:

            fabs_distance = math.fabs(distance - set_catch_link_robot_distance)

            if fabs_distance >= distance_error_range_third_level:

                base_vel.linear.x = 0.2

            elif fabs_distance < distance_error_range_third_level and fabs_distance > distance_error_range_second_level:
                
                base_vel.linear.x = 0.1

            elif fabs_distance <= distance_error_range_second_level and fabs_distance >= distance_error_range_first_level :
                
                base_vel.linear.x = 0.02

            else:
                
                base_vel.linear.x = 0.0

            if distance - set_catch_link_robot_distance < 0:
                base_vel.linear.x = -1 * base_vel.linear.x


            self.pubBase.publish(base_vel)
        elif math.fabs(degrees) < degree_error_range_second_level:

            if degrees > 0 : base_vel.angular.z = 0.02
            
            else: base_vel.angular.z = -0.04

            self.pubBase.publish(base_vel)

        elif math.fabs(degrees) < degree_error_range_third_level:
            if degrees > 0 : base_vel.angular.z = 0.05

            else: base_vel.angular.z = -0.15

            self.pubBase.publish(base_vel)

        else:
            if degrees > 0 : base_vel.angular.z = 0.1
            else: base_vel.angular.z = -0.25

            self.pubBase.publish(base_vel)
                


#------------------------------------------------

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Final Result: {result.error_code}')



    
            
        

    def handle_odom(self, odom):
        print(odom)
        time.sleep(0.1)



#---------------------------------------------------------------
#calculate fun
debug = 0


def theta1ToAll(theta1, P_xRelativeF0, P_yRelativeF0, P_zRelativeF0):
    A_xRelativeF0 = 0
    A_yRelativeF0 = l1 * math.sin(theta1)
    A_zRelativeF0 = l1 * math.cos(theta1)
    if debug == 1 : print(A_yRelativeF0, A_zRelativeF0)

    PA = math.sqrt((P_yRelativeF0 - A_yRelativeF0) * (P_yRelativeF0 - A_yRelativeF0) +
                   (P_zRelativeF0 - A_zRelativeF0) * (P_zRelativeF0 - A_zRelativeF0))

    if debug == 1:
        print('PA = ', PA)
        print("l2 + l3 = ", l2 + l3)

    if PA > l2 + l3:
        return {
            'success': False,
            'reason': 'i cant catch aim position'
        }

    cos_theta3 = (PA * PA - l2 * l2 - l3 * l3) / (2 * l2 * l3)

    if debug == 1: print("cos_theta3 = ", cos_theta3)

    if math.fabs(cos_theta3) <= 1:
        theta3 = math.acos(cos_theta3)
    else:
        return {
            'success': False,
            'reason': "cos_theta3 is wrong"
        }

    if debug == 1: print("theta3 = ", math.degrees(theta3))

    if (theta3 <= theta3_lower) | (theta3 >= theta3_upper):
        return {
            'success': False,
            'reason': 'exceed theta3 limits'
        }

    cos_gama = (PA * PA + l2 * l2 - l3 * l3) / (2 * PA * l2)

    if debug == 1:  print("cos_gama = ", cos_gama)

    gama = math.acos(cos_gama)

    if debug == 1: print("gama = ", math.degrees(gama))

    tan_arfa = (P_zRelativeF0 - A_zRelativeF0) / (P_yRelativeF0 - A_yRelativeF0)

    if debug == 1: print("tan_arfa = ", tan_arfa)

    arfa = math.atan(tan_arfa)

    if debug == 1: print("arfa = ", math.degrees(arfa))

    theta2 = math.pi / 2 - theta1 - arfa - gama



    if debug == 1 : print("theta2 = ", theta2)

    if (theta2 <= theta2_lower) | (theta2 >= theta2_upper):
        return {
            'success': False,
            'reason': 'exceed theta2 limits'
        }

    return {
        'success': True,
        'content': [math.degrees(theta2), math.degrees(theta3)]
    }


#---------------------------------------------------------------------
def get_correct_theta(p_xRelativeF0, p_yRelativeF0, p_zRelativeF0, vertical_flag):


    flag  = 0
    final_ans = [0, 0, 0]
    final_link6_R_link1_error_degree = 180
    for i in range(0, 90):
        test = theta1ToAll(math.radians(i), 0, p_yRelativeF0, p_zRelativeF0)
        if test['success']:
            flag = 1
            # print(i, test)
            # print("this calculate position is ",
            #       verify_correct([i, test["content"][0], test["content"][1]], [1, 1, 1]))
            # print("-----------------")

            angle = i + test["content"][0] + test["content"][1]

            if math.fabs(angle - 180) < final_link6_R_link1_error_degree:
                final_link6_R_link1_error_degree = math.fabs(angle - 180)
                final_ans = [i, test["content"][0], test["content"][1]]

    if vertical_flag == 1:

        theta4 = 180 - final_ans[0] - final_ans[1] - final_ans[2]
    else:
        theta4 = 90 - final_ans[0] - final_ans[1] - final_ans[2]

    
    final_ans.append(theta4)

    if flag == 1:

        return {
            'success': True,
            'content': final_ans
        }
    else: return {
        'success':False
        }


def theta2point(theta_set):

    point = JointTrajectoryPoint()
    point.positions = [math.pi / 2, math.radians(theta_set[0]), math.radians(theta_set[1]),math.radians(theta_set[2]),math.radians(theta_set[3]), math.pi / 2]

    point.velocities = [0.1,0.1,0.1,0.1,0.1, 0.6]



    point.time_from_start = Duration(seconds=1.0).to_msg()

    return point


def calculate_arm_pose(catch_link_y, catch_link_z, vertical_flag):
    
    
    if vertical_flag:
        z_set = []
        index = 0
        z_upper = 0.1
        
        while(z_upper > catch_link_z):
            z_set.append(z_upper)
            index = index +1
            z_upper = z_upper - 0.05

        z_set.append(catch_link_z)

        index = index + 1

        points = []

        for i in range(0, index):
            ans = get_correct_theta(0, catch_link_y, z_set[i], vertical_flag)
            if ans['success']:
                point = theta2point(ans['content'])
                points.append(point)

        if len(points) > 0:
            return {
                'success': True,
                'content': points
            }
        else:
            return {
                'success': False,

            }
    else:
        y_set = []
        index = 0

        y_far = 0.15

        while(y_far < catch_link_y):
            y_set.append(y_far)
            index = index + 1
            y_far = y_far + 0.05

        y_set.append(catch_link_y)

        index = index + 1

        points = []

        for i in range(0, index):
            ans = get_correct_theta(0, y_set[i], catch_link_z, vertical_flag)
            if ans['success']:
                point = theta2point(ans['content'])
                
                points.append(point)

        if len(points) > 0:
            return {
                'success': True,
                'content': points
            }
        else:
            return {
                'success': False,

            }
    
    




    
    
        
        
    

#------------------------------------------------------------------------

def main(args=None):
    rclpy.init(args=args)
    node = ctl_robot_node("ctl_robot")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()