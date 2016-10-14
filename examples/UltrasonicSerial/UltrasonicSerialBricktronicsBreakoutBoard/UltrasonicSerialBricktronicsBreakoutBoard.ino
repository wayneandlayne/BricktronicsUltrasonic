// Bricktronics Example: UltrasonicSerialBricktronicsBreakoutBoard
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
// * Wayne and Layne Bricktronics Breakout Board
//   https://store.wayneandlayne.com/products/bricktronics-breakout-board.html
// * LEGO NXT Ultrasonic sensor
//
// Software libraries used:
// * Wayne and Layne BricktronicsUltrasonic library
//   https://github.com/wayneandlayne/BricktronicsUltrasonic
//
// Written in 2016 by Matthew Beckler and Adam Wolf for Wayne and Layne, LLC
// To the extent possible under law, the author(s) have dedicated all
//   copyright and related and neighboring rights to this software to the
//   public domain worldwide. This software is distributed without any warranty.
// You should have received a copy of the CC0 Public Domain Dedication along
//   with this software. If not, see <http://creativecommons.org/publicdomain/zero/1.0/>. 


// Include the Bricktronics libraries
#include <BricktronicsUltrasonic.h>


// Connect these pins on the Bricktronics Breakout board:
//  Pin 1 - Connect to an external power supply between 7.2 and 9 volts DC
//  Pin 2 - Connect to Ground
//  Pin 3 - Connect to Ground
//  Pin 4 - Connect to 5V
//  Pin 5 - Connect to any digital pin (sclPin)
//  Pin 6 - Connect to any digital pin (sdaPin)
//
// The BricktronicsUltrasonic() arguments are:
//  sclPin (pin 5), sdaPin (pin 6)
//
BricktronicsUltrasonic u(8, 12);



void setup() 
{
  // Be sure to set your serial console to 115200 baud
  Serial.begin(115200);

  // Initialize the ultrasonic sensor connections
  u.begin();
}


void loop()
{
  Serial.println(u.getDistance());
  delay(100);
}

