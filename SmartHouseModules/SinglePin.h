// ModuleSinglePin.h

#ifndef _MODULESINGLEPIN_h
#define _MODULESINGLEPIN_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
//����� �������, ������� ������������ � �� ��� ������ ������ ������������ ����(��� 2 ������ ���� �� ������� � �����)
class SinglePinClass
{
public:
    SinglePinClass(int pin, int type);

protected:
// ��� �� ������� ����� ������
    int _pin;

private:
    // ��� ������, �� �������� ������� ��� ��������� ��� (���� ��� �����)
    int __type;
};

//extern ModuleSinglePinClass ModuleSinglePin;

#endif

