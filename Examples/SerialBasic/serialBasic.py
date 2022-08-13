# Licensed Under MIT
# https://github.com/EscWasTaken/ArduinoExamples/blob/main/LICENSE

import serial
ser = serial.Serial()
ser.baudrate = 9600
ser.port = 'COM6'
ser.open()
ser.write(b'd')
s = ser.readline()
print(s)
ser.close