#include "Tank.h"

Tank::Tank() {

};

void Tank::begin(){
    pinMode(M1SpeedPin, OUTPUT);
    pinMode(M1DirectionPin, OUTPUT);
    pinMode(M2SpeedPin, OUTPUT);
    pinMode(M2DirectionPin, OUTPUT);
};

void Tank::setLeftMotorPWM(int pwm) {

    if (pwm > 255) {
        pwm = 255;
    } else if (pwm < -255) {
        pwm = -255;
    }
  
    analogWrite (M1SpeedPin, abs(pwm));      //PWM Speed Control

    if(pwm >= 0) {
        digitalWrite(M1DirectionPin,HIGH); 
    } 
    else {
        digitalWrite(M1DirectionPin,LOW);
    }
};

void Tank::setRightMotorPWM(int pwm) {

    if (pwm > 255) {
        pwm = 255;
    } else if (pwm < -255) {
        pwm = -255;
    }

    analogWrite (M2SpeedPin, abs(pwm));      //PWM Speed Control

    if(pwm >= 0) {
        digitalWrite(M2DirectionPin,HIGH); 
    } 
    else {
        digitalWrite(M2DirectionPin,LOW);
    }
};

void Tank::turnOffMotors(){
    digitalWrite(M1SpeedPin,LOW);
    digitalWrite(M2SpeedPin,LOW);
};