// 
// 
// 

#include "RelayKey.h"

void RelayKeyClass::switchON()
{
    state = HIGH;
    digitalWrite(_pin,state);   
}

void RelayKeyClass::switchOFF()
{
    state = LOW;
    digitalWrite(_pin, state);
}

void RelayKeyClass::invertState()
{
    state = !state;
    digitalWrite(_pin, state);
}
