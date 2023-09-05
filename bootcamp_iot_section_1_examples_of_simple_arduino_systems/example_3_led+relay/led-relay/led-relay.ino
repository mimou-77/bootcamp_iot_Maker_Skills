#define ledPin 18 //we chose the pin 18 for the led 
#define relayPin 19 //we chose the pin 19 for the relay 

void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(relayPin, OUTPUT);
}

void loop() {

  /* the brightness of the led increases, when it reaches 50% the relay is ON, the brightness keeps increasing 
  until it reaches 100% then it decreases, when it reaches 50%, the relay is OFF. */
  
  for (int i=0; i <= 255; i++){ 
    analogWrite(ledPin, i); 
    delay(50);
    if(i==127){
      digitalWrite(relayPin,1);
    }
  }
  
  for (int i=255; i>=0; i--){
    analogWrite(ledPin, i); 
    delay(50);
    if(i==127){
      digitalWrite(relayPin,0);
    }
  }
}
