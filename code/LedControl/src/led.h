/**
 * \file led.h
 */

#ifndef LED_H_
#define LED_H_

/** \brief     The LED's on the board that can be controlled. */
typedef enum
{
    RED_LED,
    GREEN_LED,
    BLUE_LED
} LedType;

/**
 * \brief      Turns on a chosen LED.
 *
 * \details    Turns on the power to a chosen RBG LED causing it to light up.
 *             There are several available LED's, the function argument is used
 *             for choosing what LED to turn on.
 *
 * \param[in]  led - The LED to be turned on.
 *
 * \return     Void.
 */
void turnOn(LedType led);

/**
 * \brief      Turns off a chosen LED.
 *
 * \details    Turns off the power to a chosen RBG LED causing it to not be
 *             light up. There are several available LED's, the function
 *             argument is used for choosing what LED to turn off.
 *
 * \param[in]  led - The LED to be turned off.
 *
 * \return     Void.
 */
void turnOff(LedType led);

#endif /* LED_H_ */
