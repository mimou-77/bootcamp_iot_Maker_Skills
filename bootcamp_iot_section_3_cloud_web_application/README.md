# cloud web application

2 simple web apps that communicate with the cloud (firebase) to visualize and modify data. 

## Description

### Project 1 :
A web app (dashboard) that:
    - visualizes the status of each of the 2 lamps.
    - allows the user to change the status of each of the 2 lamps. The database in the cloud will change accordingly.
The ESP32 development board connects to wifi > internet > cloud and tests displaying and modifying the status of each lamp. 

### project 2 : 
A web app (dashboard) that visualizes, on a plotter, the temperatures Ti and the date/time of aquisition of each Ti. 
The ESP32 development board connects to wifi > internet > cloud and tests displaying the temperatures Ti acquired from a temperature sensor.

### Dependencies 

- Os : Windows 10

- SW :
    - Arduino IDE
    - Angular (V. 20.5.1) + Node.js (V. 18.16.1)

- Libraries : 
    - Espressif ESP32 for Arduino, +++others+++ 

- HW used : ESP32-S2 Wroom develepment board

### Executing program

Open the file "XX/YY/ZZ" in VSCode  and run it. The running web app should look like this:

-o-

## Authors

Maker Skills : https://makerskillsup.com

## Version History

- 0.1 : initial release (29/08/2023)

## License

This project is licensed under the [MIT] License - see the LICENSE.md file for details
