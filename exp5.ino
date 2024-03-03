/*
Experiment No.	:	05
Statement		:	Make a street light controller.
Date of Exp.	:	xx/xx/xxxx
Author		:	Harshita Soni (A-01)
*/
#define ldrPin A0
#define streetLight 3
void setup() {
  // put your setup code here, to run once:
  pinMode(ldrPin,INPUT);
  pinMode(streetLight,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrVal=analogRead(ldrPin);
  Serial.println(ldrVal);
  int lightVal=map(ldrVal,50,1023,0,255);
  analogWrite(streetLight,lightVal);
  Serial.print("Light Val: ");
  Serial.println(lightVal);
}
