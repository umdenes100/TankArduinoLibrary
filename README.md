# Tank Arduino Library

The Tank arduino library is used on the simulator to control the motors on the simulator OSVs.

The library provides you access to the tank class, which can be used to control an OSV's motors. To configure your own motors to be compatible with this library, refer to the configuration section below. 

## Download and Installation

To download this library, click on the blue **Download** button on the right. Make sure the file is unzipped and move it to the arduino libraries folder (Documents->Arduino->libraries). You must have Arduino IDE version 1.5.0 or above. The most current version of Arduino IDE can be downloaded from the [Arduino website](https://www.arduino.cc/en/Main/Software).

**If you have an older version of the library on your computer, you _must_ delete it before adding a newer version.** Failure to do this may cause file conflicts and it is not guaranteed that the library will work properly.

## Usage

To use the library, you have to direct the compiler to include it in your code. Go to **Sketch > Include Library > Tank** , or add it manually by typing `#include "Tank.h"` at the top of your sketch.

To use the library, call `Tank.begin();` in the setup portion of the code. Now you are able to control the motors on the simulator.

## Functions

The following functions are available in the Tank library:

`Tank.begin()`
initializes the tank to be controlled.

`Tank.setLeftMotorPWM(pwm)`
sets the left motor pwms to the value passed as an argument.

`Tank.setRightMotorPWM(pwm)`
sets the right motor pwms to the value passed as an argument.

`Tank.turnOffMotors()`
sets the pwm of both motors to 0.

## Configuration
Note: You can ignore this section if you are not using the Tank library to control your physical motors.

Also note: A tank uses two or more wheels powered by two independent motors.

|**Motor**  |**Speed Pin**|**Direction Pin**|
|:---------:|:-----------:|:---------------:|
|Left Motor |      5      |         4       |
|Right Motor|      6      |         7       |
