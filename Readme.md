## Bluetooth Door Lock Control

## Overview

This project allows you to control a solenoid lock using an Arduino Nano and an HC-05 Bluetooth module. You can lock and unlock the door using a smartphone or any device capable of sending Bluetooth commands to the Arduino. The setup is ideal for creating a simple and effective door security system.

## Components Used

- **Arduino Nano**
- **HC-05 Bluetooth Module**
- **5V Solenoid Lock**
- **Breadboard**
- **Jumper Wires**
- **Power Supply (for the solenoid lock)**

## Wiring Instructions

### HC-05 Bluetooth Module
- **VCC** -> 5V on Arduino
- **GND** -> GND on Arduino
- **TXD** -> Pin 10 (RX of Arduino, Software Serial)
- **RXD** -> Pin 11 (TX of Arduino, Software Serial)

### Solenoid Lock
- **Positive** -> Pin 7 on Arduino (or connected to a relay if needed for higher power)
- **Negative** -> GND

## How It Works

1. **Bluetooth Communication**: The HC-05 module receives commands from a Bluetooth-enabled device, like a smartphone. You can use a Bluetooth terminal app to send simple commands to the Arduino.
2. **Door Control**: Based on the command received, the Arduino either locks or unlocks the solenoid lock. The lock state is controlled via Pin 7.
3. **Commands**: 
   - Sending '1' unlocks the door.
   - Sending '0' locks the door.

## Setup Instructions

1. **Wiring**: Connect the HC-05 Bluetooth module and solenoid lock to the Arduino Nano as per the wiring instructions.
2. **Bluetooth App**: Install any Bluetooth terminal app on your smartphone that allows you to send commands via Bluetooth.
3. **Pairing**: Pair your smartphone with the HC-05 module (default password is usually '1234' or '0000').
4. **Upload Code**: Upload the provided code to your Arduino Nano using the Arduino IDE.
5. **Test**: Open the Bluetooth terminal app, connect to the HC-05 module, and send the command '1' to unlock the door and '0' to lock it.

## Features

- **Bluetooth Control**: Use your smartphone or Bluetooth-enabled device to control the solenoid lock.
- **Secure Locking**: Ensure door safety with a solenoid lock that can be controlled remotely.
- **Simple Commands**: The system responds to basic '1' (unlock) and '0' (lock) commands.
  
## Applications

- **Home Security**: Implement a secure door locking system for homes.
- **Offices**: Control office doors with a simple Bluetooth command system.
- **DIY Smart Lock**: Use this as the foundation for building your own smart door lock system.

## Customization

- **Advanced Features**: Add a password system or additional authentication methods for enhanced security.
- **Feedback Mechanism**: Implement LEDs or an LCD display to show the current lock status.
- **Relay Integration**: If the solenoid lock requires more current than the Arduino can supply, integrate a relay module to control the lock.

## License

This project is licensed under the MIT License. You are free to use, modify, and distribute this project for personal and commercial use.
