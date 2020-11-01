/**
 * \file led.c
 */

#include "led.h"

#include "board.h"

#include "S32K144.h"

#include <assert.h>
#include <stdbool.h>

void turnOn(LedType_t led)
{
    switch (led)
    {
    case RED_LED:
        PTD->PCOR |= 1 << PTD15;
        break;
    case GREEN_LED:
        PTD->PCOR |= 1 << PTD16;
        break;
    case BLUE_LED:
        PTD->PCOR |= 1 << PTD0;
        break;
    default:
        assert(false);
    }
}

void turnOff(LedType_t led)
{
    switch (led)
       {
       case RED_LED:
           PTD->PSOR |= 1 << PTD15;
           break;
       case GREEN_LED:
           PTD->PSOR |= 1 << PTD16;
           break;
       case BLUE_LED:
           PTD->PSOR |= 1 << PTD0;
           break;
       default:
           assert(false);
       }
}
