/**
 * \file switch_button.c
 */

#include "switch_button.h"

#include "board.h"

#include "S32K144.h"

#include <assert.h>

bool SWBTN_isEnabled(SwitchButtonType switchButton)
{
    bool result;

    switch (switchButton)
    {
    case SW1:
        if (PTC->PDIR & (1 << SW1_PIN))
        {
            result = true;
        }
        else
        {
            result = false;
        }
        break;
    case SW2:
        if (PTC->PDIR & (1 << SW2_PIN))
        {
            result = true;
        }
        else
        {
            result = false;
        }
        break;
    default:
        assert(false); /* Unknown switch button, should never happen. */
    }

    return result;
}
