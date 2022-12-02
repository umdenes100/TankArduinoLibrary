#include "Tank.h"


void setup() {
  Tank.begin();
}


void loop() {
  // Alternate motors going fowards and full speed, reverse at half speed, and stopped
  
  Tank.setMotorPWM(1, 255);
  Tank.setMotorPWM(2, 255);
  Tank.setMotorPWM(3, 255);
  Tank.setMotorPWM(4, 255);
  delay(2000);

  Tank.setLeftMotorPWM(-127);
  Tank.setRightMotorPWM(-127);
  delay(2000);

  Tank.turnOffMotors();
  delay(1000);
}
