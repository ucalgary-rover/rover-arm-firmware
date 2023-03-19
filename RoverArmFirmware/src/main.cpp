#include <Arduino.h>

#define PIN_MOTOR1_EN 4 // FIXME change to the correct number
#define PIN_LIMIT1 4 // FIXME
#define PIN_SERVO1_SIG // FIXME
// ... (for all pins)

// create AccelStepper instances
// ...

// create MultiStepper instance
// ...

// create current monitoring instances
// ...


void setup() {
	// setup steppers
	// ...

	Serial.begin(115200);
	Serial.println("Booting...");

	// make buzzer beep
	// ... (there's a function that generates a square wave or something I'm pretty sure; try to use that)

	// perform test of status LEDs
	do_status_led_test();
}

void loop() {
	// if there is a pending line of Serial data, handle it by calling parse_gcode_and_execute_it()
	// ... (something like if Serial.available() maybe?)
	// ... parse_gcode_and_execute_it()
}

void do_status_led_test() {
	// pulse each general LED
	// ...
}

void exec_homing_sequence() { // FIXME devise a way to specify which motor we want to home as arguments (e.g., boolean for each motor maybe?)
	// zero all the motors by moving them until they hit they limit switches, one-by-one
}

void log_currents() {
	// output a UART log message with info about the current current consumption of the stepper motors
	// example output: "CURRENT A330 B98.6 C23 D0"

}

void parse_gcode_and_execute_it() { // FIXME add an argument (either string or cstring), which is the gcode line to run
	// Receive g-code like "G0 A30", and execute it
}

