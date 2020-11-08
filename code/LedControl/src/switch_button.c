/**
 * \file switch.c
 */

#include "switch_button.h"

#include "board.h"

#include "S32K144.h"

bool SWBTN_isEnabled(SwitchButtonType switchButton)
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
