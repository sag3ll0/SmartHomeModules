// MyLibrary.h

#ifndef _MYLIBRARY_h
#define _MYLIBRARY_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class MyLibraryClass
{
 protected:


 public:
	MyLibraryClass(int pin);
    void dot();
    void dash();

 private:
    int _pin;

};

#endif

