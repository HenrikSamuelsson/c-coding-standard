/**
 * \file switch.c
 */

#include "switch.h"

#include "board.h"

#include "S32K144.h"

bool switchIsEnabled(void)
{
    bool result;

    if (PTC->PDIR & (1 << SW2_PIN))
    {
        result = true;
    }
    else
    {
        result = false;
    }

    return result;
}
