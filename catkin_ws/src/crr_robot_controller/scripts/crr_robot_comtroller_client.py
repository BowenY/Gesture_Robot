#!/usr/bin/env python

import sys
from crr_robot_controller.srv import *
import rospy

def crr_robot_comtroller_client(x,y):
	rospy.wait_for_service('crr_robot_control')
	try:
		controller = rospy.ServiceProxy('crr_robot_control',crrCtrl)
		resp1 = controller(x,y)
		return resp1.response
	except rospy.ServiceException,e:
		print "service call failed : %s"%e

def usage():
	return "%s [x,y]"%sys.argv[0]

if __name__ == "__main__":
	if len(sys.argv) == 3:
		x = int(sys.argv[1])
		y = int(sys.argv[2])
	else:
		print usage()
		sys.exit(1)
	print "request %s, %s"%(x,y)
	print "%s"%crr_robot_comtroller_client(x,y)


