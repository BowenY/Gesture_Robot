#! /usr/bin/python

"""
receive_data_async.py

By zhang JIan, 2014

This example reads the serial port and asynchronously processes IO data
received from a remote XBee. and need provide a message_received_hanlder
it will start a new thread to reviece data
"""

from xbee import XBee,ZigBee
import time
import serial
import thread

class receiveDataAsync():
	def inti_xbee(self,PORT,message_received_hanlder):
		# Open serial port
		self.ser = serial.Serial(PORT, 9600)
		# Create XBee Series 1 object
      		self.xbee = ZigBee(self.ser,callback=message_received_hanlder)
		
	def __init__(self, PORT,message_received_hanlder):
		try:
			thread.start_new_thread(self.inti_xbee,(PORT,message_received_hanlder,))
		except:
			print "Error, unable to start thread!"
		while 1:
			pass
    	def __del__(self):
		# halt() must be called before closing the serial
		# port in order to ensure proper thread shutdown
		self.xbee.halt()
    		self.ser.close()

#message_received is for demo
def message_received(data):
    print data
if __name__ == '__main__':
	rd = receiveDataAsync('/dev/ttyUSB0',message_received);	

