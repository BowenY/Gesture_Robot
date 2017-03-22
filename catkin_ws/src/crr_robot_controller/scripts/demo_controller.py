#!/usr/bin/env python
# license removed for brevity
import rospy
from ccr_robot_controller.msg import *

def controller():
     pub = rospy.Publisher('crr_motor_contrl', crrContrl, queue_size=100)
     rospy.init_node('demo_controller', anonymous=True)
     rate = rospy.Rate(10) # 10hz
     while not rospy.is_shutdown():
	 controllerMsg.direction = 0
         controllerMsg.mode = 0
 
         rospy.loginfo(crrContrl)
         pub.publish(crrContrl)
         rate.sleep()

if __name__ == '__main__':
     try:
         controller()
     except rospy.ROSInterruptException:
         pass
