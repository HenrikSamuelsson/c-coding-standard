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
static void enablePortClocks(void);

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
 * \return     Void.
 */
static void setupSwitchButtonInputs(void);

/**
 * \brief      Configure output pins for LED's.
 *
 * \param      Void.
 *
 * \return     Void.
 */
static void setupLedOutputs(void);

void setup(void)
{
    enablePortClocks();
    setupSwitchButtonInputs();
    setupLedOutputs();
}

static void enablePortClocks(void)
{
    /* Enable the clock to PORT C. */
    PCC->PCCn[PCC_PORTC_INDEX] = PCC_PCCn_CGC_MASK;

    /* Enable the clock to PORT D. */
    PCC->PCCn[PCC_PORTD_INDEX] = PCC_PCCn_CGC_MASK;
}

static void setupSwitchButtonInputs(void)
{
    /* Setup of pin for switch button SW1. */
    PTC->PDDR &= ~(1 << SW1_PIN);              /* Pin as input. */
    PORTC->PCR[SW1_PIN] |= PORT_PCR_MUX(1);    /* Alternative 1, GPIO. */
    PORTC->PCR[SW1_PIN] |= PORT_PCR_PFE_MASK;  /* Enable input filter. */

    /* Setup of pin for switch button SW2. */
    PTC->PDDR &= ~(1 << SW2_PIN);              /* Pin as input. */
    PORTC->PCR[SW2_PIN] |= PORT_PCR_MUX(1);    /* Alternative 1, GPIO. */
    PORTC->PCR[SW2_PIN] |= PORT_PCR_PFE_MASK;  /* Enable input filter. */
}

static void setupLedOutputs(void)
{
    /* Setup pin for the red LED. */
    PTD->PDDR |= 1 << RED_LED_PIN;               /* Pin as output. */
    PORTD->PCR[RED_LED_PIN] = PORT_PCR_MUX(1);   /* Alternative 1, GPIO. */

    /* Setup pin for the green LED. */
    PTD->PDDR |= 1 << GREEN_LED_PIN;              /* Pin as output. */
    PORTD->PCR[GREEN_LED_PIN] = PORT_PCR_MUX(1);  /* Alternative 1, GPIO. */

    /* Setup pin for the blue LED. */
    PTD->PDDR |= 1 << BLUE_LED_PIN;               /* Pin as output. */
    PORTD->PCR[BLUE_LED_PIN] = PORT_PCR_MUX(1);   /* Alternative 1, GPIO. */
}
