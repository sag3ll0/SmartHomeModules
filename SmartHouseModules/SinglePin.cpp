// 
// 
// 

#include "SinglePin.h"

SinglePinClass::SinglePinClass(int pin, int type)
{
    _pin = pin;
    __type = type;
    pinMode(_pin, __type);
}
