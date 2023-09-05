#define ledPin 18 // We chose the pin 18 for the led.

void setup() {
  pinMode(ledPin,OUTPUT); /*we configure the pin "18" (the led pin) in output mode. Data will be sent from the MCU to that pin.*/
}

void loop() {
  /* each 1 second, the brightness of the led increases by 25%, when it reaches 100%, it decreases by 25% each 1 second. The function analogWrite uses PWM to change
  the average value of the signal sent to the led pin. 255 --> 5V : 100% ; 0 --> 0V : 0% */

  analogWrite(ledPin, 0); // led remains at minimum brightness for 1 second (0, 0%, 0V) ; led off. 
  delay(1000);
  analogWrite(ledPin, 64); // led remains at 25% * maximum brightness for 1 second (64, 25%, ~1,25V)
  delay(1000);
  analogWrite(ledPin, 127);  // led remains at 50% * maximum brightness for 1 second (127, 50%, ~2,5V)
  delay(1000);
  analogWrite(ledPin, 191);  // led remains at 75% * maximum brightness for 1 second (191, 75%, ~3,75V)
  delay(1000);
  analogWrite(ledPin, 255); // led remains at maximum brightness for 1s (255, 100%, 5V)
  delay(1000);

/* rebelote dans le sens inverse */ 
  analogWrite(ledPin, 191);  
  delay(1000);                
  analogWrite(ledPin, 127);  
  delay(1000);    
  analogWrite(ledPin, 64); 
  delay(1000);       
}
