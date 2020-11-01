/**
 * \file controller.c
 */
#include "controller.h"

#include "board.h"
#include "led.h"
#include "switch.h"

#include "S32K144.h"

void controllerTask(void)
{
    if (switchIsEnabled())
    {
        turnOn(BLUE_LED);
    }
    else
    {
        turnOff(BLUE_LED);
    }
}
