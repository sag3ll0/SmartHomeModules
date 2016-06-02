// SensorDigital.h

#ifndef _SENSORDIGITAL_h
#define _SENSORDIGITAL_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "Sensor.h"

class SensorDigitalClass : public SensorClass
{
 protected:


 public:
     SensorDigitalClass() :SensorClass(13) {};
     SensorDigitalClass(int pin) :SensorClass(pin) {};
     bool value();
};

#endif

