#define ledPin 18
#define buttonPin 19

int buttonState = 0;

void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,OUTPUT);
}

void loop() {
  buttonState=digitalRead(buttonPin); // get the state of the button
  
  if(buttonState){                   
    digitalWrite(ledPin,1);
  }
  else{
    digitalWrite(ledPin,0);
  }
}

