/**
 * \file rgb_led.c
 */

#include "rgb_led.h"

#include "board.h"

#include "S32K144.h"

#include <assert.h>
#include <stdbool.h>

void RGBLED_turnOn(RgbLedType rgbLed)
{
    switch (rgbLed)
    {
    case RED_LED:
        PTD->PCOR |= 1 << RED_LED_PIN;
        break;
    case GREEN_LED:
        PTD->PCOR |= 1 << GREEN_LED_PIN;
        break;
    case BLUE_LED:
        PTD->PCOR |= 1 << BLUE_LED_PIN;
        break;
    default:
        assert(false);
    }
}

void turnOff(RgbLedType rbgLed)
{
    switch (rbgLed)
       {
       case RED_LED:
           PTD->PSOR |= 1 << RED_LED_PIN;
           break;
       case GREEN_LED:
           PTD->PSOR |= 1 << GREEN_LED_PIN;
           break;
       case BLUE_LED:
           PTD->PSOR |= 1 << BLUE_LED_PIN;
           break;
       default:
           assert(false);
       }
}
