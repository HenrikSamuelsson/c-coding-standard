#include "setup.h"

#include "board.h"

#include "S32K144.h"

/**
 * \brief      Enables the clock for all used port peripherals.
 *
 * \param      Void.
 *
 * \return     Void.
 */
static void enablePortClock(void);

/**
 * \brief      Configure input pins for switch buttons.
 *
 * \details    The pins connected to switch buttons are setup as:
 *             - Input
 *             - GPIO mode
 *             - Passive input filter enabled
 *
 * \param      Void.
 *
 * return      Void.
 */
void setupSwitchButtonInputs(void);

void setup(void)
{
    enablePortClock();
    setupSwitchButtonInputs();

    /* Configure port D0 as GPIO output (LED on EVB) */
    PTD->PDDR |= 1 << BLUE_LED_PIN; /* Port D0: Data Direction= output */
    PORTD->PCR[0] = PORT_PCR_MUX(1); /* Port D0: MUX = GPIO */
}

static void enablePortClock(void)
{
    /* Enable the clock to PORT C. */
    PCC->PCCn[PCC_PORTC_INDEX] = PCC_PCCn_CGC_MASK;

    /* Enable the clock to PORT D. */
    PCC->PCCn[PCC_PORTD_INDEX] = PCC_PCCn_CGC_MASK;
}

void setupSwitchButtonInputs(void)
{
    /* Setup of pin for switch button SW1. */
    PTC->PDDR &= ~(1 << SW1_PIN);              /* Set pin as input. */
    PORTC->PCR[SW1_PIN] |= PORT_PCR_MUX(1);    /* Set alternative 1 (GPIO). */
    PORTC->PCR[SW1_PIN] |= PORT_PCR_PFE_MASK;  /* Enable input filter. */

    /* Setup of pin for switch button SW2. */
    PTC->PDDR &= ~(1 << SW2_PIN);              /* Set pin as input. */
    PORTC->PCR[SW2_PIN] |= PORT_PCR_MUX(1);    /* Set alternative 1 (GPIO). */
    PORTC->PCR[SW2_PIN] |= PORT_PCR_PFE_MASK;  /* Enable input filter. */
}
