/**
 * \file controller.c
 */
#include "controller.h"

#include "board.h"
#include "S32K144.h"

#include "rgb_led.h"
#include "switch_button.h"

void controllerTask(void)
{
    if (SWBTN_isEnabled(SW2))
    {
        RGBLED_turnOn(BLUE_LED);
    }
    else
    {
        turnOff(BLUE_LED);
    }
}
