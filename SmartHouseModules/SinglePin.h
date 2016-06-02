// ModuleSinglePin.h

#ifndef _MODULESINGLEPIN_h
#define _MODULESINGLEPIN_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
//Класс модулья, который подключается в МК при помощи одного управляющего пина(еще 2 обычно идут на питание и землю)
class SinglePinClass
{
public:
    SinglePinClass(int pin, int type);

protected:
// Пин на котором сидит модуль
    int _pin;

private:
    // Тип модуля, от которого зависит как настроить пин (вход или выход)
    int __type;
};

//extern ModuleSinglePinClass ModuleSinglePin;

#endif

