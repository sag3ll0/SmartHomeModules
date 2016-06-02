// RelayKey.h

#ifndef _RELAYKEY_h
#define _RELAYKEY_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "Relay.h"
class RelayKeyClass : public RelayClass
{
 protected:
 
 public:
     RelayKeyClass():RelayClass(13){}
     RelayKeyClass(int pin):RelayClass(pin){}
	void switchON();
    void switchOFF();
    void invertState();
};


#endif

