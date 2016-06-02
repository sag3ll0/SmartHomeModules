// 
// 
// 
#include "Arduino.h"
#include "MyLibrary.h"

MyLibraryClass::MyLibraryClass(int pin){
    pinMode(pin,OUTPUT);
    _pin=pin;
}

void MyLibraryClass::dot() {
    digitalWrite(_pin, HIGH);
    delay(250);
    digitalWrite(_pin, LOW);
    delay(250);
}

void MyLibraryClass::dash() {
    digitalWrite(_pin, HIGH);
    delay(1000);
    digitalWrite(_pin, LOW);
    delay(250);
}


