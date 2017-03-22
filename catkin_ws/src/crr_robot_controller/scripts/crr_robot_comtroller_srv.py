#!/usr/bin/env python

from crr_robot_controller.srv import *
import rospy

def handle_controller(req):
	print "The control information is (direct: %d mode: %d" % (req.direction,req.mode)
	return 1

def crr_robot_comtroller_srv():
	rospy.init_node('crr_robot_comtroller_srv')
	s = rospy.Service('crr_robot_control',crrCtrl,handle_controller)
	print "Ready!"
	rospy.spin()

if __name__ == "__main__":
	crr_robot_comtroller_srv()



