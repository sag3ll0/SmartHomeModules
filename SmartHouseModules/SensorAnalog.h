// SensorAnalog.h

#ifndef _SENSORANALOG_h
#define _SENSORANALOG_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "Sensor.h"
//����� �������������� ���������� �������
class SensorAnalogClass : public SensorClass
{
 protected:

 public:
     //����������� �� ��������� ������������ ���������� ���� �0
     SensorAnalogClass() :SensorClass(A0) {};
     //����������� ������������ ������������ ��������� ���������� ����
     SensorAnalogClass(int pin) :SensorClass(pin) {};
     //���������� �������� �� ������ ������ �� 0 �� 1023
     int value();
     //���������������� �������� �� ������ ������ �� �������  minLimit, maxLimit {0,1023}=>{minLimit, maxLimit}
     int mappedValue(int minLimit, int maxLimit);
	
};



#endif

