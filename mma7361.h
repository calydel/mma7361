
#ifndef MMA7361
#define MMA7361

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include <pins_arduino.h>
#endif 


struct Readings{
 int xValue;    // variable to read the value from the analog pin 
  int yValue;    // variable to read the value from the analog pin 
  int zValue;    // variable to read the value from the analog pin 

};

class mma7361{

public:

  int XAXIS; // analog pin used to connect the x-axis on the accelerometer
  int YAXIS;  // analog pin used to connect the y-axis on the accelerometer
  int ZAXIS;  // analog pin used to connect the z-axis on the accelerometer
  int SLEEPPIN;// Pin to turn on off accelermoter, HIGH to use unit

  Readings Values;

  void setupPins();


  /**
  *Prepare the pins for I/O
  *
  */
  void setupPins(int x, int y, int z, int SleepPin);
  /**
  *
  *
  *return Returns the raw x-y-z readings from the sensor
  */
  Readings readRawValues();


};


#endif MMA7361
