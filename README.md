# Buzzer and LED Control on NodeMCU (ESP8266)
## Overview
This project demonstrates how to control two LEDs and a buzzer using the NodeMCU ESP8266. The buzzer and LEDs will alternate states every second, creating a simple alert system where one LED is on while the other is off, and the buzzer sounds intermittently.

## Components Required
NodeMCU ESP8266 development board
2 LEDs (any color)
1 Buzzer (active or passive)
3 Resistors (220Ω to limit current to the LEDs)
Breadboard and jumper wires for connections

## Pin Connections
Component	NodeMCU Pin	GPIO Pin
Buzzer	D6	GPIO 12
LED 1	D4	GPIO 2
LED 2	D5	GPIO 14
Note: On the NodeMCU, the D6, D4, and D5 pins correspond to GPIO 12, GPIO 2, and GPIO 14, respectively.


## How to Use
Upload the code to your NodeMCU using the Arduino IDE.
Connect your NodeMCU to the components as described in the "Pin Connections" section.
Power up the NodeMCU using a USB cable or an external power supply.
The system will start alternating the LEDs and the buzzer every second.
