#define ledPin 18 // We chose the pin 18 for the led.

/*the setup  section: the code here will run only once, usually used for configuration*/
void setup() {
  pinMode(ledPin,OUTPUT); /*we configure the pin "18" (le led pin) in output mode. Data will be sent from the 
  MCU to that pin.*/
}

/*the loop  section: the code here will be executed in an infinite loop*/
void loop() {
  /*The function "analogWrite" will use PWM to change the average value of voltage, thus the brightness of the led will change accordingly*/

  analogWrite(ledPin, 255); // 255 ---> 5V ; led remains at maximum brightness (100%) for 1s
      delay(1000);
    analogWrite(ledPin, 127);  // 127 ---> ~2,5V ; led remains at a ~50% brightness value for 1s
      delay(1000);
        analogWrite(ledPin, 64);  // 64 ---> ~1,25 ; led remains at a ~25% brightness value for 1s
      delay(1000);
      analogWrite(ledPin, 0);  // 0 ---> 0V ; led remains at minimum brightness (0%) for 1s (led off)
      delay(1000);
}
