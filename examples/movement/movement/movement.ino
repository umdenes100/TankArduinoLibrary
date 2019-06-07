#include "Tank.h"

void setup() {
  // put your setup code here, to run once:
  Tank.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Tank.setLeftMotorPWM(255);
  Tank.setRightMotorPWM(255);
  delay(200);
  Tank.turnOffMotors();
  delay(200);
}
