#include "Arduino.h" // we need to include the "Arduino.h" library to be able to use the serial monitor methods.
#define potPin 36 /* we verify that GPIO36 is connected to the ADC (we want to read an analog value) */

int potValue = 0; // digitalized value of the analog signal we recieve from the potentiometer

void setup() {
  pinMode(potPin,INPUT);
  Serial.begin(115200); /* we establish a serial connection btw the ESP32 board and the computer with a baudrate
  of 115200 (the frequency required by a ESP32 board) */ 
}

void loop() {
  /* each 5 seconds the serial monitor will display the value of the signal recieved from the potentiometer */
  potValue=analogRead(potPin); // we retrive the value of the signal on the pin 36
  Serial.println(potValue); // we display the value on the serial monitor
  delay (5000); // we wait for 5 seonds
}

