#!/usr/bin/env python

import rospy
import time
from std_msgs.msg import UInt32

#from send_data_zigbee import sendData
from bicommunication_zigbee import biCommunicate
#from receive_data import dataReceive

def node_init():
	global pub 
	pub = rospy.Publisher('crr_robot_ctrl',UInt32, queue_size = 100)
        rospy.init_node('crr_robot_ctrl',anonymous = True)

def send_command(dir,mod):
	command =(mod << 8) | dir
	pub.publish(command)

def message_received(data):
    	command = int(data['rf_data'])
	print command
	dir = command & 0xFF
	mod = (command >> 8) & 0xFF
	send_command(dir,mod)

def control_handler():
	sd = biCommunicate('/dev/ttyUSB0',message_received)
	while 1:
		time.sleep(0.1)

if __name__ == '__main__':
	node_init()
	try:
		control_handler()
	except rospy.ROSInterruptException:
		pass

	
