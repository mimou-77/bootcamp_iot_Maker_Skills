/* The ESP board connects to Wifi, sends a http request to the website and prints the data it retrieved from there*/

#include "Arduino.h"    // we need to include the "Arduino.h" library to be able to use the serial monitor methods.
#include "WiFi.h"       // we need to include the "WiFi.h" library to be able to use the wifi methods.
#include "HTTPClient.h" // we need to include the "HTTPClient.h" library to be able to use methods and classes of a http client.

#define ssid "mimou"     // replace "XX" with the ssid of your network
#define password "123456789"  // replace "YY" with the password of your network

#define URL "https://api.open-meteo.com/v1/forecast?latitude=61.08614478657065&longitude=99.112454344346&current_weather=true&hourly=temperature_2m,relativehumidity_2m,windspeed_10m&quot" // the URL of 
// the website we want to retrive data from 

void setup() {

  Serial.begin(115200);      // we establish a serial connection with the computer 
  WiFi.begin(ssid,password); // we establish a wifi connection to the chosen network defined by the (ssid,password)
  
  /* waits for ESP to connect to the wifi network. Prints a dot each second while the ESP isn't connected to a Wifi network. When the ESP connects, prints "wifi connected" */
  Serial.println("Trying to connect to Wifi");
  while (WiFi.status() != WL_CONNECTED) {
  Serial.print(".");
  delay(1000);
  }
  Serial.println("\nConnected to Wifi");

  /* we send a GET requet to a web server. The server sends a response that contains a response code and a payload.  We display the response code and payload on the serial monitor */
  HTTPClient httpC; // we create an object from the class "HTTPClient"
  httpC.begin(URL); // we establish a http connection with the server of the specified URL
  int httpCode=httpC.GET(); /* GET() sends the http request "GET" to the server, the server then sends a response. GET() returns 0 if no info from the server and a response code >0 
  (200,404,... ) otherwise. */
  Serial.print("response code = "); // displays the response code on the serial monitor
  Serial.println(httpCode);
  if(httpCode>0){ // if GET() returns an int >0 : the server sent back a response.
    String payload=httpC.getString(); // getString() returns the payload which is a string that contains the data part of the http response. In our case, the payload contains weather informations
    Serial.print("payload= ");        // displays the payload on the serial monitor
    Serial.println(payload);
  }
  else{ // if GET() returns 0 : no infos from the server => we display an error message
    Serial.println("Error in HTTP request");
  }
  httpC.end(); // we close the previously established http connection
}

void loop() {
  // nothing here 
}