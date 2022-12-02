#include "Tank.h"


void setup() {
  Tank.begin();
}


void loop() {
  // Drive forward and follow a line using the front two IR sensors until the ultrasonic or bump sensor detects a nearby obstacle
  
  // IMPORTANT!!! 
  // Remember to calibrate the IR sensors with their potentiometers or this will not work
  // The output indicator LEDs on IRs 1 and 3 should turn on when over the mat and turn off when over the line
  
  while (Tank.readDistanceSensor(1) > 0.15 && Tank.readBumpSensor(1) == 0) {
    if (Tank.readIrSensor(1) == 0 && Tank.readIrSensor(3) == 0) {  // Both IRs reading low, something has gone wrong
      Tank.turnOffMotors();
    }
    else if (Tank.readIrSensor(1) == 1 && Tank.readIrSensor(3) == 1) {  // Neither IR reading low, on line, go straight
      Tank.setLeftMotorPWM(255);
      Tank.setRightMotorPWM(127);
    }
    else if (Tank.readIrSensor(1) == 0 && Tank.readIrSensor(3) == 1) {  // Tilt robot towards left by stopping the left wheel and moving the right one
      Tank.setLeftMotorPWM(100);
      Tank.setRightMotorPWM(255);
    }
    else if (Tank.readIrSensor(1) == 1 && Tank.readIrSensor(3) == 0) {  // Tilt robot towards right by stopping the right wheel and moving the left one
      Tank.setLeftMotorPWM(255);
      Tank.setRightMotorPWM(100);
    }
    else {
      Tank.turnOffMotors();
    }
  }

  // Reached the mission site, stop the motors
  Tank.turnOffMotors();
  
}
