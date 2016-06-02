// 
// 
// 

#include "SensorDigital.h"

bool SensorDigitalClass::value()
{
    return digitalRead(_pin);
}

