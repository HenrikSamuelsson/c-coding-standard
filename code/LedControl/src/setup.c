#include "setup.h"

#include "board.h"

#include "S32K144.h"

void setup(void)
{
    /* Enable clocks to PORT peripherals. */
        PCC->PCCn[PCC_PORTC_INDEX] = PCC_PCCn_CGC_MASK;    /* Enable clock to PORT C. */
        PCC->PCCn[PCC_PORTD_INDEX] = PCC_PCCn_CGC_MASK;    /* Enable clock to PORT D. */

        /* Configure port C12 as GPIO input (BTN 0 [SW2] on EVB) */
        PTC->PDDR &= ~(1 << PTC12); /* Port C12: Data Direction= input (default) */
        PORTC->PCR[12] = PORT_PCR_MUX(1) | PORT_PCR_PFE_MASK; /* Port C12: MUX = GPIO, input filter enabled */

        /* Configure port D0 as GPIO output (LED on EVB) */
        PTD->PDDR |= 1 << PTD0; /* Port D0: Data Direction= output */
        PORTD->PCR[0] = PORT_PCR_MUX(1); /* Port D0: MUX = GPIO */
}
