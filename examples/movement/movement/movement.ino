#include "Tank.h"

Tank tank;
void setup() {
  // put your setup code here, to run once:
  tank.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  tank.setLeftMotorPWM(255);
  tank.setRightMotorPWM(255);
  delay(200);
  tank.turnOffMotors();
  delay(200);
}
