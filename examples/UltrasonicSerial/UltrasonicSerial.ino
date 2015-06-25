// Bricktronics Example: UltrasonicSerial
// http://www.wayneandlayne.com/bricktronics
// This example uses a LEGO NXT Ultrasonic Sensor.
//
// Ultrasonic readings are taken every 100 milliseconds, and 
// printed out over the serial console. Be sure to set your serial
// console to 115200 baud. The ultrasonic sensor reports the distance
// to an obstruction in front of the sensor (in centimeters). It has
// a range of 2.5 meters, a resolution of 1 cm, and reported accuracy
// of +/- 3 cm. 255 is sometimes reported as an error state.
//
// This example uses an Ultrasonic Sensor, so it needs more voltage
// than a USB port usually gives. Use an external power supply that
// provides between 7.2 and 9 volts DC. Two options that work really
// well are a 9V wall adapter or a 6xAA battery pack (2.1mm plug).


// Include the BricktronicsUltrasonic library
#include <BricktronicsUltrasonic.h>


// This example can be run in three different ways. Pick one, and un-comment
// the code lines corresponding to your chosen method. Comment-out the lines
// for the other methods that you aren't using.

// 1. With a Bricktronics Shield - Include these lines and be sure to
// call BricktronicsShield::begin() in the setup() function below.
// You also need to install the Adafruit MCP23017 library:
//	https://github.com/adafruit/Adafruit-MCP23017-Arduino-Library
// Select the sensor port for the sensor (SENSOR_3 and SENSOR_4) below.
// Use the jumpers to connect pins 1-2 and 4-5 for the ultrasonic sensor.
//
// Config 1 - arduino:avr:uno
//#include <Wire.h>
//#include <Adafruit_MCP23017.h>
//#include <BricktronicsShield.h>
//BricktronicsUltrasonic u(BricktronicsShield::SENSOR_4);
// Config end

// 2. With a Bricktronics Megashield - Include these lines but do not
// call BricktronicsShield::begin() in the setup() function below.
// Select the sensor port for the sensor (SENSOR_1 through SENSOR_4) below.
// Use the jumpers to connect pins 1-2 and 4-5 for the ultrasonic sensor.
//
// Config 2 - arduino:avr:mega:cpu=atmega2560
//#include <BricktronicsMegashield.h>
//BricktronicsUltrasonic u(BricktronicsMegashield::SENSOR_4);
// Config end

// 3. With a Bricktronics Breakout board - No additional includes needed, just
// update the pin assignments in the Ultrasonic constructor below.
//
// The Ultrasonic() arguments are: sclPin, sdaPin
//
// Config 3 - arduino:avr:uno
//BricktronicsUltrasonic u(8, 12);
// Config end


void setup() 
{
  // Be sure to set your serial console to 115200 baud
  Serial.begin(115200);

  // Only call this if you are using a Bricktronics Shield,
  // otherwise leave it commented-out.
  // Config 1 - arduino:avr:uno
  //BricktronicsShield::begin();
  // Config end

  // Initialize the ultrasonic sensor connections
  u.begin();
}


void loop()
{
  Serial.println(u.getDistance());

  delay(100);
}

