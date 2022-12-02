#include "Tank.h"


void setup() {
  Tank.begin();
}


void loop() {
  // Drive forward at half speed until bump sensor is triggered
  
  // Set motors to half speed
  Tank.setLeftMotorPWM(127);
  Tank.setRightMotorPWM(127);

  // Wait for bump sensor to be pressed
  while(!Tank.readBumpSensor(1)) {}

  // Turn off motors and halt the program
  Tank.turnOffMotors();
  while(1) {};
}
