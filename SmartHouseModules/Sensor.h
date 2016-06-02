// ModuleSensor.h

#ifndef _MODULESENSOR_h
#define _MODULESENSOR_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "SinglePin.h"
//����� ������������ ����� ������, � �������� ����� ������� ����� �� ��������
class SensorClass:public SinglePinClass
{
 protected:


 public:
     SensorClass(int pin):SinglePinClass(pin,INPUT){}
	
};



#endif

