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


// ласс представл€ющий собою исполнительное реле реагирующее на значени€ аналогового датчика
class RelayWithAnalogSensorClass
{
 protected:

 private:
     static void _doWork(RelayWithAnalogSensorClass local);
     SimpleTimer _timer;

 public:
   
    //јналоговый датчик предоставл€ющий значени€
    SensorAnalogClass Sensor;
    //»спольнительное реле
    RelayKeyClass Relay;
    //«начение аналогового датчика при достижении которого происходит именение состо€ни€.
    int changeStateValue;
    //ѕеречисление определ€ющее логику работы реле (контроль превышени€ или снижени€)
    enum moduleType : bool
    {
        //“ип реле, которое срабатывает при понижении значени€ аналогового датчика ниже значени€ переключени€
        heater = true,
        //“ип реле, которое срабатывает при превышении значени€ аналогового датчика ниже значени€ переключени€
        cooling = false
    };
    //“ип логики рабочего модул€
    moduleType type;
    RelayWithAnalogSensorClass(int pinSensor, int pinRelay, int changeStateValue, moduleType type);
    RelayWithAnalogSensorClass(int pinSensor, int pinRelay, int changeStateValue, moduleType type, long RefreshIntervalInSec);
    void startWorking();
    long RefreshIntervalInSec;
     
};


#endif

