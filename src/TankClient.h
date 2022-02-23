#ifndef DFRTank_H_
#define DFRTank_H_

#include <Arduino.h>

#define M1SpeedPin 5
#define M2SpeedPin 6
#define M1DirectionPin 4
#define M2DirectionPin 7
#define trigPin 8
#define echoPin 9

class TankClient {

public:

  TankClient();
  void begin();

  void turnOffMotors();
  void setRightMotorPWM(int pwm);
  void setLeftMotorPWM(int pwm);
  float readDistanceSensor(int sensorId);

};

#endif
