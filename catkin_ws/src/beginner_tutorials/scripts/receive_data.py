#! /usr/bin/python

"""
receive_samples.py

Jian Zhang

This example continuously reads the serial port and processes IO data
received from a remote XBee.
"""

from xbee import XBee,ZigBee
import serial

def dataReceive(PORT):
	BAUD_RATE = 9600

	# Open serial port
	ser = serial.Serial(PORT, BAUD_RATE)

	# Create API object
	xbee = ZigBee(ser)

	# Continuously read and print packets
	while True:
	    try:
		response = xbee.wait_read_frame()
		print response
	    except KeyboardInterrupt:
		break
		
	ser.close()
