/*
Experiment No.	:	06
Statement		:	Design a 4-bit counter.
Date of Exp.	:	xx/xx/xxxx
Author		:	Harshita Soni (A-01)
*/

const int ledPins[] = {6, 7, 8, 9}; 
const int switchPin = 2;              

// Variables
int counter = 0;
int switchState = 0;
int lastSwitchState = 0;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  pinMode(switchPin, INPUT);

  updateLEDs();
}

void loop() {
  // Read the state of the switch
  switchState = digitalRead(switchPin);

  // Check if the switch state has changed
  if (switchState != lastSwitchState) {
    if (switchState == HIGH) {
      // Increment the counter when the switch is pressed
      counter = (counter + 1) % 16;
      updateLEDs();
    }
    delay(50); // Debounce delay
  }

  // Save the current switch state for comparison
  lastSwitchState = switchState;
}

// Function to update LEDs based on the current counter value
void updateLEDs() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], bitRead(counter, i));
  }
}