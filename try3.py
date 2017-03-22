#!/usr/bin/env python
import rospy
import roslib
import time

from std_msgs.msg import Int16,Float32,String

start=time.time()

        

class DiffTf:

    def __init__(self):
        rospy.init_node("try")
        self.nodename = rospy.get_name()
        self.lWheel = rospy.Publisher("lwheel_vtarget", Float32)
        self.rWheel = rospy.Publisher("rwheel_vtarget", Float32)
	rospy.Subscriber('neuro_gest_kinect/gesture', String, self.callback)
   
    def spin(self):
        timer=0
        r = rospy.Rate(10)
        while not rospy.is_shutdown():
		start=time.time()
		#r.sleep()
   
    def callback(self, data):
	timer=0
	if data.data == 'clockw':
		desiretime = time.time()
		while True:
			end = time.time()
			if int(end-desiretime) <11: 
				self.lWheel.publish(0.1)
				self.rWheel.publish(-0.1)
			else:
				self.lWheel.publish(0)
				self.rWheel.publish(0)
				break
	elif data.data == 'counterclockw':
		desiretime = time.time()
		while True:
			end = time.time()
			if int(end-desiretime) < 11: 
				self.lWheel.publish(-0.1)
				self.rWheel.publish(0.1)
			else:
				self.lWheel.publish(0)
				self.rWheel.publish(0)
				break
	elif data.data == 'forward':
		desiretime = time.time()
		while True:
			end = time.time()
			if int(end-desiretime) < 5: 
				self.lWheel.publish(0.05)
				self.rWheel.publish(0.05)
			else:
				self.lWheel.publish(0)
				self.rWheel.publish(0)
				break
	elif data.data == 'backward':
		desiretime = time.time()
		while True:
			end = time.time()
			if int(end-desiretime) < 5: 
				self.lWheel.publish(-0.1)
				self.rWheel.publish(-0.1)
			else:
				self.lWheel.publish(0)
				self.rWheel.publish(0)
				break
	elif data.data == 'stop':
		desiretime = time.time()
		while True:
			end = time.time()
			if int(end-desiretime) < 1: 
				self.lWheel.publish(0)
				self.rWheel.publish(0)
			else:
				self.lWheel.publish(0)
				self.rWheel.publish(0)
				break
    
if __name__ == '__main__':
    """ main """
    diffTf = DiffTf()
    diffTf.spin()
    diffTf.callback()
   
    
    
   
