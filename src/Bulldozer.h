#include <Arduino.h>

#include <Bluetooth.h>
#include <Keyboard.h>
#include <Joystick.h>
#include <Button.h>
#include <Led.h>

class Bull
{
    public:
        void setup();
        Bluetooth bluetooth;
        Keyboard keyboard;
        Joystick leftJoystick;
        Joystick rightJoystick;
        Button switcher;
        Led led1;
        Led led2;
        Led led3;
};

class Dozer
{
    public:
        void setup();
        Bluetooth bluetooth;
        Led led1;
        Led led2;
        Led led3;
};