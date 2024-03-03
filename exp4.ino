/*
Experiment No.	:	04
Statement		:	Fade and brighten 5 LEDs alternatively.
Date of Exp.	:	xx/xx/xxxx
Author		:	Harshita Soni (A-01)
*/


int ledPin1 = 3;  
int ledPin2 = 5;
int ledPin3 = 6;
int ledPin4 = 9;
int ledPin5 = 10;

void setup() {
  
  pinMode(ledPin1, OUTPUT);   
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  
  Serial.begin(9600); 
}

void loop() {
 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    analogWrite(ledPin1, fadeValue); // Brighten LED1
    delay(30);
  }
 for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    analogWrite(ledPin1, fadeValue); // Fade LED1
    delay(30);
  }


  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    analogWrite(ledPin2, fadeValue); // Brighten LED2
    delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    analogWrite(ledPin2, fadeValue); // Fade LED2
    delay(30);
  }
  
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    analogWrite(ledPin3, fadeValue); // Brighten LED3
    delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    analogWrite(ledPin3, fadeValue); // Fade LED3
    delay(30);
  }
  
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    analogWrite(ledPin4, fadeValue); // Brighten LED4
    delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    analogWrite(ledPin4, fadeValue); // Fade LED4
    delay(30);
  }

  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    analogWrite(ledPin5, fadeValue); // Brighten LED5
    delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    analogWrite(ledPin5, fadeValue); // Fade LED5
    delay(30);
  }
  
}