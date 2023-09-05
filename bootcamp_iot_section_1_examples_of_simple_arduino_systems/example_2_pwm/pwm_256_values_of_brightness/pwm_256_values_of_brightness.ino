#define ledPin 18 // We chose the pin 18 for the led.

void setup() {
  pinMode(ledPin,OUTPUT); // we configure the led pin in output mode: Data will be sent from the MCU to the pin.
}

void loop() {

/* each 50 ms, the brightness goes up a notch, when it reaches 100% brightness, it decreases a notch reach 50 ms. */

  for (int i=0; i <= 255; i++){ 
    analogWrite(ledPin, i); 
    delay(50);
  }

  for (int i=255; i>=0; i--){
    analogWrite(ledPin, i); 
    delay(50);
  }
}
