#define ledPin 18 //"ledPin" will be replaced by "18" in the whole code. We chose the pin 18 for the led.

/*the setup  section: the code here will run only once, usually used for configuration*/
void setup() {
  pinMode(ledpin,OUTPUT); /*we configure the pin "18" (le led pin) in output mode. Data will be sent from the 
  MCU to that pin.*/
}

/*the loop  section: the code here will be executed in an infinite loop*/
void loop() {
  /*the led will blink each 1 second*/

  digitalWrite(ledpin,1);// the MCU sends a digital signal = 1 on the led pin. (led on)
  delay(1000); /* delay: stops the code for a period of time in mS (here: 1000 mS = 1 S). Delay will keep the
  led on for 1 second */
  digitalWrite(ledpin,0);// the MCU sends a digital signal = 0 on the led pin. (led off)
  delay(1000);//another delay to keep the led off for 1s
}
