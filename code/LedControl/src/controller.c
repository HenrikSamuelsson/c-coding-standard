/*!
 * controller.c
 *
 *
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
    { /* -If BTN0 was not pushed*/
        PTD->PSOR |= 1 << PTD0; /* Set Output on port D0 (LED off) */
    }
}
