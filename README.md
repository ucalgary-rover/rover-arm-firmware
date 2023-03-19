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

## Supported G-Code Commands
The controller supports the following g-code-like commands. Note that the definitions of these commands differ from standard g-code (e.g., the way incremental vs. absolute moves are handled).

All measurements are in degrees of the joint.

* Absolute Move: `G0 A30 B42`
* Incremental Move: `G1 A30 B42`
* Dear controller, are you working?: `G31`
	* Responds with `Doing great!`
* Emergency Stop: `M112`
	* Jumps queue.
