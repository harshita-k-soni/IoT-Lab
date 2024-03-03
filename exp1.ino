int i; // initialize global variable, i
void setup()  
{   //Set pin number 2,3,4,5 and 6 as output.
  for(i=2;i<=6;i++){pinMode(i,OUTPUT); } 
}
void loop()
{  //blink the leds from left to right 
  for(i=2;i<=6;i++){   
digitalWrite(i,HIGH);
    delay(100); //delay of 100ms 
    digitalWrite(i,LOW);
  }
  //blink the leds from right to left
  for(i=6;i>=2;i--){
    digitalWrite(i,HIGH);
    delay(100); //delay of 100ms
    digitalWrite(i,LOW);
  	}
}
