/*
 Name:		TestLib.ino
 Created:	20.05.2016 13:35:35
 Author:	ooi
*/

// the setup function runs once when you press reset or power the board
#include "MyLibrary.h"
int pin = 13;
MyLibraryClass M(13);
void setup() {
    
}

// the loop function runs over and over again until power down or reset
void loop() {
  M.dot(); M.dot(); M.dot();
  M.dash(); M.dash(); M.dash();
  M.dot(); M.dot(); M.dot();
  delay(3000);
}