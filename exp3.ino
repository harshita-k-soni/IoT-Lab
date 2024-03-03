/*
Experiment No.	:	03
Statement		:	Make a light intensity meter that represent light intensity on 5 LEDs, such that all LEDs
would glow for maximum light, no LED would glow for dark condition, and likewise for
in between light intensities.
Date of Exp.	:	xx/xx/xxxx
Author		:	Harshita Soni (A-01)
*/

int i;
#define ldrpin A0
void setup()
{
  for(i=2;i<=6;i++){
    pinMode(i,OUTPUT); 
      }
  Serial.begin(9600);
  pinMode(ldrpin,INPUT);
}

void loop()
{
  int ldrval=analogRead(ldrpin);
  Serial.println(ldrval);
  int involt=map(ldrval,0,1023,0,255);
  if(ldrval>=900){
    for(i=2;i<=6;i++){
      digitalWrite(i,HIGH);
    }
  }
  else if(ldrval>=700){
    for(i=2;i<=5;i++){
      digitalWrite(i,HIGH);
    }
    digitalWrite(6,LOW);
  }
  else if(ldrval>=300){
    for(i=2;i<=4;i++){
    	digitalWrite(i,HIGH);
    }
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  else if(ldrval>=200){
    for(i=2;i<=3;i++){
    	digitalWrite(i,HIGH);
    }
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
  }
  else if(ldrval>=100){
    digitalWrite(2,HIGH);
    for(i=3;i<=6;i++)
      digitalWrite(i,LOW);
  }
  
  else{
    for(i=2;i<=6;i++)
      digitalWrite(i,LOW);
  }
  delay(100);
}
  