Door locking system with two microcontrollers of ATmega32 version.

First Microcontroller: HMI ECU that is responsible for interacting with LCD, keypad, displaying the status of door and alerts and sending keypad pressed keys to Control ECU using UART.

Second Microcontroller: Control ECU that is responsible for password comparison received from HMI ECU using UART, saving passwords in an external EEPROM using I2C and activating Buzzer and motor to open and close door.
