/*!
 * controller.c
 *
 *
 */
#include "controller.h"

#include "board.h"

#include "S32K144.h"

void controllerTask(void)
{
    /*! -If Pad Data Input = 1 (BTN0 [SW2] pushed)
     *
     * Clear Output on port D0 (LED on)
     *
     */

    if (PTC->PDIR & (1 << PTC12))
    {
        PTD->PCOR |= 1 << PTD0;
    }
    else
    { /* -If BTN0 was not pushed*/
        PTD->PSOR |= 1 << PTD0; /* Set Output on port D0 (LED off) */
    }
}
