# Tank Arduino Library

The Tank arduino library enables you to use the DFRTank robots provided by ENES100. In order to use the library, type `#include "Tank.h"` in the top of your sketch. This provides you access to the tank class which can be used to control the motors.

Once you have included the library, you must create a tank object. to do this type: `Tank tank`. `tank` is simply an identifier and can be set to any name you would prefer. Once the object is created, type `tank.begin();` in the setup portion of the code. Now you are able to control the motors.

## Functions

To call a tank function, type `tank.` followed by the function you wish to call. All of the available functions are as follows:

`begin()`
initializes the tank to be controlled.

`setLeftMotorPWM(pwm)`
sets the left motor pwms to the value passed as an argument.

`setRightMotorPWM(pwm)`
sets the right motor pwms to the value passed as an argument.

`turnOffMotors()`
sets the pwm of both motors to 0.
