/*
Experiment No.	:	09
Statement		:	Lit an LED with brightness equal to 0%, 25%, 50%, 75%, 100% via serial monitor
window.
Date of Exp.	:	xx/xx/xxxx
Author		:	Harshita Soni (A-01)
*/

const int ledPin = 11; 

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  if (Serial.available() > 0) { 
      short brightness = Serial.parseInt(); 
      if (brightness >= 0 && brightness <= 100) { 
        analogWrite(ledPin, brightness * 255 / 100); 
        Serial.println(brightness);
    } else {
      Serial.println("Please enter valid number");
    }
  }
}
