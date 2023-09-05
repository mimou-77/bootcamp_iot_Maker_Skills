#include "Arduino.h"  // we need to include the "Arduino.h" library to be able to use the serial monitor methods

#define potPin 36 // we verify that the pin 36 is connected to the ADC ( we need to read an analog signal from the potentiometer)

int potValue=0; // the value of the signal we recieve from the potentiometer (analog signal converted to digital via the ADC)

void setup() {

  Serial.begin(115200); // we establish a serial connection with a baudrate of 115200 (the baudrate required by an ESP32 board)
}

void loop() {

  /*displays each 5 seconds the value of the signal received from the potentiometer*/
  potValue=analogRead(potPin); // reads the signal received from the potentiometer
  Serial.println(potValue); // displays the value of the signal received from the potentiometer
  delay(5000); // waits for 5s 
}

