/**
 * \file switch.c
 */

#include "switch.h"

#include "board.h"

#include "S32K144.h"

bool switchIsEnabled(void)
{
    bool result;

    if (PTC->PDIR & (1 << PTC12))
    {
        result = true;
    }
    else
    {
        result = false;
    }

    return result;
}
