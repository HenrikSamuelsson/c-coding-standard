/*
 * main implementation: use this 'C' sample to create your own application
 *
 */
#include "S32K144.h"

#include <stdio.h>

#if defined (__ghs__)
    #define __INTERRUPT_SVC  __interrupt
    #define __NO_RETURN _Pragma("ghs nowarning 111")
#elif defined (__ICCARM__)
    #define __INTERRUPT_SVC  __svc
    #define __NO_RETURN _Pragma("diag_suppress=Pe111")
#elif defined (__GNUC__)
    #define __INTERRUPT_SVC  __attribute__ ((interrupt ("SVC")))
    #define __NO_RETURN
#else
    #define __INTERRUPT_SVC
    #define __NO_RETURN
#endif

/*! Port PTD0, bit 0: FRDM EVB output to blue LED
 */
#define PTD0  0

/*! Port PTC12, bit 12: FRDM EVB input from BTN0 [SW2]
 */
#define PTC12 12

int counter, accumulator = 0, limit_value = 1000000;

int main(void)
{
    counter = 0;

    /* Enable clocks to PORT peripherals. */
    PCC-> PCCn[PCC_PORTC_INDEX] = PCC_PCCn_CGC_MASK;    /* Enable clock to PORT C. */
    PCC-> PCCn[PCC_PORTD_INDEX] = PCC_PCCn_CGC_MASK;    /* Enable clock to PORT D. */

	/* Configure port C12 as GPIO input (BTN 0 [SW2] on EVB) */
PTC->PDDR &= ~(1<<PTC12);   /* Port C12: Data Direction= input (default) */
PORTC->PCR[12] = PORT_PCR_MUX(1)
|PORT_PCR_PFE_MASK; /* Port C12: MUX = GPIO, input filter enabled */

		/* Configure port D0 as GPIO output (LED on EVB) */
PTD->PDDR |= 1<<PTD0;       /* Port D0: Data Direction= output */
PORTD->PCR[0] = PORT_PCR_MUX(1); /* Port D0: MUX = GPIO */

    for (;;)
    {
        counter++;

    	/*! -If Pad Data Input = 1 (BTN0 [SW2] pushed)
    			 *
    			 * Clear Output on port D0 (LED on)
    			 *
    			*/

    			if (PTC->PDIR & (1<<PTC12)) {
    				PTD-> PCOR |= 1<<PTD0;
    			}
    			else {							 /* -If BTN0 was not pushed*/
    				PTD-> PSOR |= 1<<PTD0;       /*		Set Output on port D0 (LED off) */
    			}

        if (counter >= limit_value) {
            __asm volatile ("svc 0");
            counter = 0;
        }
    }
    /* to avoid the warning message for GHS and IAR: statement is unreachable*/
    __NO_RETURN
    return 0;
}

__INTERRUPT_SVC void SVC_Handler() {
    accumulator += counter;
    printf("counter is 0x%08x, accumulator is 0x%08x\n", counter, accumulator);
}
