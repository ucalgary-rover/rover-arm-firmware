# rover-arm-firmware
Firmware for the SSRT Rover arm's main microcontroller

## Features
* Receive G-Code-like commands via UART, and execute them to control the rover arm.
* Sends motor current usage continuously via UART to assess motor torques and performance.
* Future: Automatic stepper skip detection based on continuous current monitoring. 
* Custom implementation of g-code parser for maximum configurability and understanding.
* Supports simultaneous movements of all 7 stepper motors at once.
* Simple design and extensive testing leads to high reliability. 
* Uses Platform.io to compile for the Arduino Mega.

## Build Guide
1. Install the Arduino IDE (maybe optional, recommended).
2. In VSCode, install the Platform.io extension.
3. Clone this repo, and open it in VSCode.
4. Uuuuh more.
