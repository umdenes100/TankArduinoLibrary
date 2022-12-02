#include "Tank.h"


void setup() {
  Tank.begin();
}


void loop() {
  // Drive forward at half speed until front ultrasonic sensor detects an object 10cm away
  
  // Set motors to half speed
  Tank.setLeftMotorPWM(127);
  Tank.setRightMotorPWM(127);

  // Wait for object to be within 10cm of Tank
  while(Tank.readDistanceSensor(1) > 0.1) {}

  // Set motors to reverse full speed for 1 second
  Tank.setLeftMotorPWM(-255);
  Tank.setRightMotorPWM(-255);
  delay(1000);

  // Turn off motors and halt the program
  Tank.turnOffMotors();
  while(1) {};
}
