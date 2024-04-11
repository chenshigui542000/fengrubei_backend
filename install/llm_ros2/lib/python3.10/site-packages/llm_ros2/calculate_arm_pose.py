import math
from arm_para import *

debug = 0


def theta1ToAll(theta1, P_xRelativeF0, P_yRelativeF0, P_zRelativeF0):
    A_xRelativeF0 = 0
    A_yRelativeF0 = l1 * math.cos(theta1)
    A_zRelativeF0 = l1 * math.sin(theta1)
    if debug == 1 : print(A_yRelativeF0, A_zRelativeF0)

    PA = math.sqrt((P_yRelativeF0 - A_yRelativeF0) * (P_yRelativeF0 - A_yRelativeF0) +
                   (P_zRelativeF0 - A_zRelativeF0) * (P_zRelativeF0 - A_zRelativeF0))

    if debug == 1: print('PA = ', PA)

    if PA > l2 + l3:
        return {
            'success': False,
            'reason': 'i cant catch aim position'
        }

    cos_theta3 = (PA * PA - l2 * l2 - l3 * l3) / (2 * l2 * l3)

    if debug == 1: print("cos_theta3 = ", cos_theta3)

    theta3 = math.acos(cos_theta3)

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

    theta2 = theta1 - arfa - gama

    if (theta2 <= theta2_lower) | (theta2 >= theta2_upper):
        return {
            'success': False,
            'reason': 'exceed theta2 limits'
        }

    return {
        'success': True,
        'content': [theta2, theta3]
    }

def calculate_arm_pose(catch_link_y, catch_link_z):
    for i in range(0, 270):
        test = theta1ToAll(math.radians(i), 0, 0.2, -0.3)
        if test['success']:
            return {
                'success': True,
                'joint2_theta1': math.radians(i),
                'joint3_theta2': test['content'][0],
                'joint4_theta3': test['content'][1]
            }
        
    return {
        'success': False
    }



