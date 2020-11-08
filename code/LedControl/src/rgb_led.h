/**
 * \file led.h
 */

#ifndef RGB_LED_H_
#define RGB_LED_H_

/** \brief     The LED's on the board that can be controlled. */
typedef enum
{
    RED_LED,
    GREEN_LED,
    BLUE_LED
} RgbLedType;

/**
 * \brief      Turns on a chosen RGB LED.
 *
 * \details    Turns on the power to a chosen RBG LED causing it to light
 *             up. There are several available LED's, the function argument
 *             is used for choosing what LED to turn on.
 *
 * \param[in]  led - What RGB LED to be turned on.
 *
 * \return     Void.
 */
void RGBLED_turnOn(RgbLedType led);

/**
 * \brief      Turns off a chosen RBG LED.
 *
 * \details    Turns off the power to a chosen RBG LED causing it to not be
 *             light up. There are several available LED's, the function
 *             argument is used for choosing what LED to turn off.
 *
 * \param[in]  led What RBG LED to be turned off.
 *
 * \return     Void.
 */
void RBGLED_turnOff(RgbLedType led);

#endif /* RGB_LED_H_ */
