// RelayWithAnalogSensor.h

#ifndef _RELAYWITHANALOGSENSOR_h
#define _RELAYWITHANALOGSENSOR_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "SimpleTimer-master643384\SimpleTimer.h"

#include "SensorAnalog.h"
#include "RelayKey.h"


//����� �������������� ����� �������������� ���� ����������� �� �������� ����������� �������
class RelayWithAnalogSensorClass
{
 protected:

 private:
     static void _doWork(RelayWithAnalogSensorClass local);
     SimpleTimer _timer;

 public:
   
    //���������� ������ ��������������� ��������
    SensorAnalogClass Sensor;
    //��������������� ����
    RelayKeyClass Relay;
    //�������� ����������� ������� ��� ���������� �������� ���������� �������� ���������.
    int changeStateValue;
    //������������ ������������ ������ ������ ���� (�������� ���������� ��� ��������)
    enum moduleType : bool
    {
        //��� ����, ������� ����������� ��� ��������� �������� ����������� ������� ���� �������� ������������
        heater = true,
        //��� ����, ������� ����������� ��� ���������� �������� ����������� ������� ���� �������� ������������
        cooling = false
    };
    //��� ������ �������� ������
    moduleType type;
    RelayWithAnalogSensorClass(int pinSensor, int pinRelay, int changeStateValue, moduleType type);
    RelayWithAnalogSensorClass(int pinSensor, int pinRelay, int changeStateValue, moduleType type, long RefreshIntervalInSec);
    void startWorking();
    long RefreshIntervalInSec;
     
};


#endif

