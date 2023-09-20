/*WORKS OKAY*/


const int ledA=13;
const int motionA=2;
const int relayPinA=11;

const int ledB=13;
const int motionB=8;
const int relayPinB=11;

void setup() {
  pinMode(ledA,OUTPUT);
  pinMode(motionA,INPUT);
  pinMode(relayPinA,OUTPUT);
  
  pinMode(ledB,OUTPUT);
  pinMode(motionB,INPUT);
  pinMode(relayPinB,OUTPUT);

  digitalWrite(relayPinA,HIGH);
  digitalWrite(relayPinB,HIGH);
}

void loop() {
  
    int value=digitalRead(motionA);
    if(value==HIGH){
   
      digitalWrite(relayPinA,LOW);
      delay(300000);
    
      digitalWrite(relayPinA,HIGH);
      delay(500);

    }
    else
    {
      int value1=digitalRead(motionB);
      if(value1==HIGH)
      {
        digitalWrite(relayPinB,LOW);
        delay(300000);
        
        digitalWrite(relayPinB,HIGH);
        delay(500);
      }
    }
}
