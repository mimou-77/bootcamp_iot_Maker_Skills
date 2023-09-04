#define ledPin 18 // We chose the pin 18 for the led.

/*the setup  section: the code here will run only once, usually used for configuration*/
void setup() {
  pinMode(ledPin,OUTPUT); /*we configure the pin "18" (le led pin) in output mode. Data will be sent from the 
  MCU to that pin.*/
}

/*the loop  section: the code here will be executed in an infinite loop*/
void loop() {
  /*The function "analogWrite" will use PWM to change the average value of voltage, thus the brightness of the led will change accordingly*/

  for (int i=255; i >= 0; i--){ //each 50 ms, the brightness goes up a notch 
    analogWrite(ledPin, i); 
    delay(50);
    }
  }
