#include "TankClient.h"

TankClient::TankClient() {

};

void TankClient::begin(){
    pinMode(M1SpeedPin, OUTPUT);
    pinMode(M1DirectionPin, OUTPUT);
    pinMode(M2SpeedPin, OUTPUT);
    pinMode(M2DirectionPin, OUTPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
};

void TankClient::setLeftMotorPWM(int pwm) {

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

void TankClient::setRightMotorPWM(int pwm) {

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

void TankClient::turnOffMotors() {
    digitalWrite(M1SpeedPin,LOW);
    digitalWrite(M2SpeedPin,LOW);
};

float TankClient::readDistanceSensor(int sensorId) {     //Returns Distance in cm
    if (sensorId != 1) {
        return -1;
    };
    
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    int duration = pulseIn(echoPin, HIGH);
    if (duration < 20000 && duration > 0) {
        return min(duration * .0001715, 1);
    } else return -1;
};
