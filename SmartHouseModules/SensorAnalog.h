// SensorAnalog.h

#ifndef _SENSORANALOG_h
#define _SENSORANALOG_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "Sensor.h"
//Класс представляющий аналоговые датчики
class SensorAnalogClass : public SensorClass
{
 protected:

 public:
     //Конструктор по умолчанию активирующий аналоговый порт А0
     SensorAnalogClass() :SensorClass(A0) {};
     //Конструктор активирующий активирующий указанный аналоговый порт
     SensorAnalogClass(int pin) :SensorClass(pin) {};
     //Аналоговое значение на выводе модуля от 0 до 1023
     int value();
     //Масштабированное значение на выводе модуля по границе  minLimit, maxLimit {0,1023}=>{minLimit, maxLimit}
     int mappedValue(int minLimit, int maxLimit);
	
};



#endif

