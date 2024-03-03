/*
Experiment No.	:	10
Statement		: Blink an LED in accordance with the brightness. Blinking frequency increases with
increase in brightness.
Date of Exp.	:	xx/xx/xxxx
Author		:	Harshita Soni (A-01)
*/
int ldrpin=A0;
int ledpin=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(ldrpin,INPUT);
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr_val=analogRead(ldrpin);
  int mapped_val=map(ldr_val,0,1023,1000,100);
  digitalWrite(ledpin,HIGH);
  delay(mapped_val);
  digitalWrite(ledpin,LOW);
  delay(mapped_val);
  Serial.println(ldr_val);
}

