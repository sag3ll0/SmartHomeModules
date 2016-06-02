// 
// 
// 

#include "SensorAnalog.h"

int SensorAnalogClass::value()
{
    return analogRead(_pin);
}

int SensorAnalogClass::mappedValue(int minLimit, int maxLimit)
{
    return map(value(), 0, 1023, minLimit, maxLimit);
}
