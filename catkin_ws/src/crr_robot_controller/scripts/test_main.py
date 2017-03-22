#! /usr/bin/python

from send_data_zigbee import sendData
from bicommunication_zigbee import biCommunicate
from receive_data import dataReceive

def message_received(data):
    print data
def bi_data():
	sd = biCommunicate('/dev/ttyUSB0',message_received)
	while 1:
		name = raw_input("input the name you wanna send to: ")
		data = raw_input("input the data you want to send: ")
   		#sd.send_Data_to_addr('\x00\x13\xA2\x00\x40\xB4\x03\x97','\xFF\xFE','\x36')
		sd.send_Data_to_name(name,'\xFF\xFE',data) 
def send_data():
	sd = sendData('/dev/ttyUSB0')
   	#sd.send_Data_to_addr('\x00\x13\xA2\x00\x40\xB4\x03\x97','\xFF\xFE','\x31')
	name = raw_input("input the name you wanna send to: ")
	data = raw_input("input the data you want to send: ")
	sd.send_Data_to_name(name,'\xFF\xFE',data)
def help_print():
	print('bi: you can input data send to others, and meanwhile can receive data')
	print('send: only send data to others')
	print('rec: only receive data')

if __name__ == '__main__':
	mod = raw_input("please input the mode your want to,\n your can input help to get more information:")

	if mod == 'help':
		help_print()
	elif mod == 'bi':
		bi_data()
	elif mod == 'send':
		send_data()
	elif mod == 'rec':
		dataReceive('/dev/ttyUSB0')
	else :
		print('input error!')
		help_print()
	
	

	#while 1:
	#	name = raw_input("input the name you wanna send to: ")
	#	data = raw_input("input the data you want to send: ")

   		#sd.send_Data_to_addr('\x00\x13\xA2\x00\x40\xB4\x03\x97','\xFF\xFE','\x36')
	#	sd.send_Data_to_name(name,'\xFF\xFE',data)
	
