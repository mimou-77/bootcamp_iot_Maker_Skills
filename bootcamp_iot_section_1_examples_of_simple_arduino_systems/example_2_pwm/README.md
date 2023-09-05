# PWM

Use PWM to change the brightness of the led.
- In the Version 1 (pwm_4_values_of_brightness) : the led takes 4 values of brightness (0,25%,50%,100%). The led remains in each value for 1 second.
- In the version 2 (256 values of brightness) : the brightness of the led increases by a notch each 50 ms.

## Description

- The wiring diagram

![This is an alt text.](../img/wiring%20diagram.png "This is a sample image.")

- The electrical schematics (make sure to choose a resistor with a resitance value adpated to the led and the voltage/current of the MCU (Vmcu=5V))

![This is an alt text.](../img/electric%20schematics.png "This is a sample image.")

- The arduino code for version 1 and version 2 is respectively in "pwm_4_values_of_brightness.ino" and "pwm_256_values_of_brightness.ino".

## Authors

Maker Skills : https://makerskillsup.com

## Version History

- 0.1 : initial release (29/08/2023)

## License

This project is licensed under the [MIT] License - see the LICENSE.md file for details
