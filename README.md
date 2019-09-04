# Tank Arduino Library

The Tank arduino library enables you to use the DFRTank robots provided by ENES100. The library provides you access to the tank class, which can be used to control an OSV's motors. To configure your own motors to be compatible with this library, refer to the configuration section below. 

In order to use this library in your Arduino sketch, type `#include "Tank.h"` at the top of your sketch.

To use the library, call `Tank.begin();` in the setup portion of the code. Now you are able to control the motors.

## Functions

To call a tank function, type `Tank.` followed by the function you wish to call. All of the available functions are as follows:

`begin()`
initializes the tank to be controlled.

`setLeftMotorPWM(pwm)`
sets the left motor pwms to the value passed as an argument.

`setRightMotorPWM(pwm)`
sets the right motor pwms to the value passed as an argument.

`turnOffMotors()`
sets the pwm of both motors to 0.

## Configuration
Note: You can ignore this section if you are not using the Tank library to control your physical motors.

Also note: A tank uses two or more wheels powered by two independent motors.

|**Motor**|**Speed Pin**|**Direction Pin**|
|:-------:|:-----------:|:---------------:|
|Left Motor|5|4|
|Right Motor|6|7|
