#define ledPin 18 // We chose the pin 18 for the led.
#define relayPin 19 // We chose the pin 19 for the relay.

void setup() {
  pinMode(ledPin,OUTPUT); // we configure the led pin in output mode: Data will be sent from the MCU to the pin.
  pinMode(relayPin,OUTPUT);// we configure the relay pin in output mode. 
}

void loop() {
  /*The function "analogWrite" will use PWM to change the average value of voltage, thus the brightness of the led will change accordingly.
  when the brightness reaches the level 100%: the relay will be set ON, when the brightness reaches */

  for (int i=0; i >= 0; i--){ //each 50 ms, the brightness goes up a notch 
    analogWrite(ledPin, i); 
    delay(50);
    }
  }
