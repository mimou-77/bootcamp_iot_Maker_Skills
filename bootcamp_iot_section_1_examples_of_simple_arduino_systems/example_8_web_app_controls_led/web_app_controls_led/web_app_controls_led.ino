/* the URL we used (http://www.bousselmi.tn/api.txt) is a web app that sends "0" or "1". If it sends "0", the led is set OFF, otherwise the led is set ON. by controlling what the web app sends, we control the led. */

#include "WiFi.h"
#include "HTTPClient.h"

#define ledPin 18
#define ssid "XX"
#define password "YY"
#define URL "http://www.bousselmi.tn/api.txt" // the URL of the web app we will use 

HTTPClient httpC;

void setup(){

  pinMode(ledPin,OUTPUT);
  Serial.begin(115200);  
  WiFi.begin(ssid,password);

  while (WiFi.status() != WL_CONNECTED) {
  Serial.print(".");
  delay(1000);
  }
  Serial.println("\nConnected to Wifi");
  httpC.begin(URL);
}

void loop(){

  /* we send a GET() request to the server to get a payload, if the payload is "0", the led is set ON, if the payload is "1" the led is set OFF */

  int httpCode=httpC.GET(); // the server's http respone code is stored in httpCode 
  if(httpCode>0){ /*if the server sent a response .......................*/
    String payload=httpC.getString(); // the data part of the server's http response is stored in payload 
    Serial.print("payload= "); Serial.print(payload); // display the data we got from the server.
    if(payload=="0"){
      digitalWrite(ledPin,0);
      Serial.println("Led OFF");
    }
    else{
      digitalWrite(ledPin,1);
      Serial.println("Led ON");
    }
  } 
  else{
    Serial.println("Error in HTTP request");
  }
}