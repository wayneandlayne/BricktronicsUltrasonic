// Bricktronics Example: UltrasonicSerialBricktronicsShield
// http://www.wayneandlayne.com/bricktronics
//
// This example uses a LEGO NXT Ultrasonic Sensor. Ultrasonic readings
// are taken every 100 milliseconds, and  printed out over the serial console.
// Be sure to set your serial console to 115200 baud. The ultrasonic sensor
// reports the distance to an obstruction in front of the sensor
// (in centimeters). It has a range of 2.5 meters, a resolution of 1 cm, and
// reported accuracy of +/- 3 cm. 255 is sometimes reported as an error state.
//
// This example uses an Ultrasonic Sensor, so it needs more voltage
// than a USB port usually gives. Use an external power supply that
// provides between 7.2 and 9 volts DC. Two options that work really
// well are a 9V wall adapter or a 6xAA battery pack (2.1mm plug).
//
// Hardware used:
// * Wayne and Layne Bricktronics Shield
//   https://store.wayneandlayne.com/products/bricktronics-shield-kit.html
// * LEGO NXT Ultrasonic sensor
//
// Software libraries used:
// * Wayne and Layne BricktronicsUltrasonic library
//   https://github.com/wayneandlayne/BricktronicsUltrasonic
// * Wayne and Layne BricktronicsShield library
//   https://github.com/wayneandlayne/BricktronicsShield
//
// Written in 2016 by Matthew Beckler and Adam Wolf for Wayne and Layne, LLC
// To the extent possible under law, the author(s) have dedicated all
//   copyright and related and neighboring rights to this software to the
//   public domain worldwide. This software is distributed without any warranty.
// You should have received a copy of the CC0 Public Domain Dedication along
//   with this software. If not, see <http://creativecommons.org/publicdomain/zero/1.0/>. 


// Include the Bricktronics libraries
#include <BricktronicsShield.h>
#include <BricktronicsUltrasonic.h>


// Select the sensor port for the sensor (SENSOR_3 or SENSOR_4) below.
// Use the jumpers to connect pins 1-2 and 4-5 for the ultrasonic sensor.
BricktronicsUltrasonic u(BricktronicsShield::SENSOR_4);


void setup() 
{
  // Be sure to set your serial console to 115200 baud
  Serial.begin(115200);

  // Initialize the Bricktronics Shield
  BricktronicsShield::begin();

  // Initialize the ultrasonic sensor connections
  u.begin();
}


void loop()
{
  Serial.println(u.getDistance());
  delay(100);
}

