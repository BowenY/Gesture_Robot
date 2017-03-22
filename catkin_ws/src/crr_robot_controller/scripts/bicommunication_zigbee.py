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

class biCommunicate():

	BAUD_RATE = 9600
	name2address = { 	'moe' 	:	'\x00\x13\xA2\x00\x40\xB4\x03\x97',
				'larry'	:	'\x00\x13\xA2\x00\x40\xB1\x04\x80',
				'curly'	:	'\x00\x13\xA2\x00\x40\xA7\x88\x80',
				'backup':	'\x00\x13\xA2\x00\x40\xA7\x8A\x84',
				'coordinater' 	:	'\x00\x00\x00\x00\x00\x00\x00\x00'
			}
			

    	def send_Data_to_addr(self,long_addr,addr_low,Data):
    		self.xbee.send('tx', dest_addr_long=long_addr, dest_addr=addr_low,data=Data)
    		# no need Wait for response, because the response will be async read

        def send_Data_to_name(self,name,addr_low,Data):
		long_addr = biCommunicate.name2address[name]
    		self.xbee.send('tx', dest_addr_long=long_addr, dest_addr=addr_low,data=Data)
		# no need Wait for response, because the response will be async read
	
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
	
    	def __del__(self):
		# halt() must be called before closing the serial
		# port in order to ensure proper thread shutdown
		self.xbee.halt()
    		self.ser.close()

def message_received(data):
    print data
if __name__ == '__main__':
	sd = biCommunicate('/dev/ttyUSB0',message_received);	
   	sd.send_Data_to_addr('\x00\x13\xA2\x00\x40\xB4\x03\x97','\xFF\xFE','\x31')
	sd.send_Data_to_name('moe','\xFF\xFE','thanks!')
