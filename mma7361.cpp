#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include <pins_arduino.h>
#endif
#include "mma7361.h"

/**
*Setup the pins, Default is pin two for sleepin
*/
void mma7361::setupPins() 
{ 

  int XAXIS = A2;  // analog pin used to connect the x-axis on the accelerometer
  int YAXIS = A1;  // analog pin used to connect the y-axis on the accelerometer
  int ZAXIS = A0;  // analog pin used to connect the z-axis on the accelerometer
  int SLEEPPIN = 2;// Pin to turn on off accelermoter, HIGH to use unit

  pinMode(XAXIS, INPUT); // Read from the X-axis pin from the accelerometer
  pinMode(YAXIS, INPUT); // Read from the Y-axis pin from the accelerometer
  pinMode(ZAXIS, INPUT); // Read from the Z-axis pin from the accelerometer
  pinMode(SLEEPPIN, OUTPUT); // Set the Sleep pin to a digital output
  
  digitalWrite(SLEEPPIN, HIGH);

}

void mma7361::setupPins(int x, int y, int z, int SleepPin) 
{ 
  XAXIS = x;  // analog pin used to connect the x-axis on the accelerometer
  YAXIS = y;  // analog pin used to connect the y-axis on the accelerometer
  ZAXIS = z;  // analog pin used to connect the z-axis on the accelerometer
  SLEEPPIN = SleepPin;

  pinMode(XAXIS, INPUT); // Read from the X-axis pin from the accelerometer
  pinMode(YAXIS, INPUT); // Read from the Y-axis pin from the accelerometer
  pinMode(ZAXIS, INPUT); // Read from the Z-axis pin from the accelerometer
  pinMode(SLEEPPIN, OUTPUT); // Set the Sleep pin to a digital output
  
  digitalWrite(SLEEPPIN, HIGH);
  
}

/**
*
*
*return Returns the raw readings from the sensor
*/
Readings mma7361::readRawValues(){

  Values.xValue = analogRead(XAXIS);            // reads the value of the X-Axis (value between 0 and 1023) 
  Values.yValue = analogRead(YAXIS);            // reads the value of the X-Axis (value between 0 and 1023) 
  Values.zValue = analogRead(ZAXIS);            // reads the value of the X-Axis (value between 0 and 1023) 
return Values;


}


