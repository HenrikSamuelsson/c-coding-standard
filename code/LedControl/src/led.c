/**
 * \file led.c
 */

#include "led.h"

#include "board.h"

#include "S32K144.h"

void turnOn(LedType_t ledType)
{
    switch (ledType)
    {
    case BLUE_LED:
        PTD->PCOR |= 1 << PTD0;
        break;
    }
}
