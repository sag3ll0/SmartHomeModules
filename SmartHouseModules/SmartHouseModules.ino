/*
 Name:		SmartHouseModules.ino
 Created:	20.05.2016 14:03:31
 Author:	ooi
*/

// the setup function runs once when you press reset or power the board
#include "RelayWithAnalogSensor.h"
#include "RelayKey.h"
#include "Relay.h"
#include "SensorAnalog.h"
#include "SensorDigital.h"

SensorAnalogClass An0;
SensorDigitalClass Di2(2);
RelayWithAnalogSensorClass rwas(A0,2,512,RelayWithAnalogSensorClass::cooling);


void setup() {    
    Serial.begin(9600);
}

// the loop function runs over and over again until power down or reset
void loop() {
    Serial.println(An0.value());
    Serial.println(Di2.value());
    rwas.Relay.switchON();
    delay(1000);
}
