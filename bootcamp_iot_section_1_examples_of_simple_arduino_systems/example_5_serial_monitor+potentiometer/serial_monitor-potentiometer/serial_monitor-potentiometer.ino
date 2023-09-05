#include "Arduino.h"  // we need to include the "Arduino.h" library to be able to use the serial monitor methods.
#include "WiFi.h"     // we need to include the "WiFi.h" library to be able to use the wifi methods.

#define ssid "XX"     // replace "---" with the ssid of your network
#define password "YY"  // replace "---" with the password of your network

void setup() {

  Serial.begin(115200);      // we establish a serial connection with the computer 
  WiFi.begin(ssid,password); // we establish a wifi connection to the chosen network defined by the (ssid,password)

  
  /* waits for ESP to connect to the wifi network. Prints a dot each second while the ESP isn't connected to a Wifi network. When the ESP connects, prints "wifi conncted" */
  Serial.println("Trying to connect to Wifi");
  while (WiFi.status() != WL_CONNECTED) {
  Serial.print(".");
  delay(1000);
  }
  Serial.println("\n connected to Wifi");

  /* Displays the local Ip of the ESP on the serial monitor. Local IP = IP of the ESP32 in the local network it is connected to */
  Serial.print("local IP: ");
  Serial.print(WiFi.localIP());
}

void loop() {
  //nothing to be executed on a loop
}

