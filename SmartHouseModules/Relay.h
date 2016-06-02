// Relay.h

#ifndef _RELAY_h
#define _RELAY_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "SinglePin.h"
// ласс представл€ющий исполнительное реле
class RelayClass: public SinglePinClass
{
 protected:

 public:
    RelayClass(int pin):SinglePinClass(pin,OUTPUT){}
    bool state;
    	
};



#endif

