#include <Arduino.h>

#include "Bull.h"

/**
 * Setup all the bull's components
 */
void Bull::setup()
{
    bluetooth.setup();
    led1.setup();
    led2.setup();
    led3.setup();
}
