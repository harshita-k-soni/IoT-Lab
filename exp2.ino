int i;
#define buttonone 8
#define buttontwo 9
void setup()
{
  for(i=2;i<=6;i++){
    pinMode(i,OUTPUT); 
      }
  pinMode(8,INPUT);
  pinMode(9,INPUT);
}

void loop()
{
  int button1_val=digitalRead(8);
  int button2_val=digitalRead(9);
  if(button1_val==0){
    
  	for(i=2;i<=6;i++){
		digitalWrite(i,HIGH);
    	delay(100);
    	digitalWrite(i,LOW);
      if(i==6){
        i=1;
      }
      button2_val=digitalRead(9);
      if(button2_val==0){
        break;
      }
  	}
   
  }
  else if(button2_val==0){
    
  	for(i=6;i>=2;i--){
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
    if(i==2){
        i=7;
      }
      button1_val=digitalRead(8);
      if(button1_val==0){
        break;
      }
   }
  }
}

