// 
// 
// 

#include "RelayWithAnalogSensor.h"


void  RelayWithAnalogSensorClass::_doWork(RelayWithAnalogSensorClass local)
{
    switch (local.type)
    {
    case moduleType::cooling: local.Sensor.value()> local.changeStateValue ? local.Relay.switchON : local.Relay.switchOFF;
    case moduleType::heater: local.Sensor.value()< local.changeStateValue ? local.Relay.switchON : local.Relay.switchOFF;
    default:
        break;
    }    
}

RelayWithAnalogSensorClass::RelayWithAnalogSensorClass(int pinSensor,int pinRelay,int changeStateValue, moduleType type)
{

    this->Sensor = SensorAnalogClass(pinSensor);
    this->Relay = RelayKeyClass(pinRelay);
    this->changeStateValue = changeStateValue;
    this->type = type;
    this->RefreshIntervalInSec = 1;
    _timer.setInterval(this->RefreshIntervalInSec * 1000, _doWork);
}

RelayWithAnalogSensorClass::RelayWithAnalogSensorClass(int pinSensor, int pinRelay, int changeStateValue, moduleType type, long RefreshIntervalInSec)
{
    this->Sensor = SensorAnalogClass(pinSensor);
    this->Relay = RelayKeyClass(pinRelay);
    this->changeStateValue = changeStateValue;
    this->type = type;
    this->RefreshIntervalInSec = RefreshIntervalInSec;
    _timer.setInterval(this->RefreshIntervalInSec * 1000, _doWork);
}

void RelayWithAnalogSensorClass::startWorking()
{
    _timer.run();
}
