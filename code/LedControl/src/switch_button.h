/**
 * \file switch_button.h
 */

#ifndef SWITCH_BUTTON_H_
#define SWITCH_BUTTON_H_

#include <stdbool.h>

/**
 * \brief      The named switch buttons on the board.
 */
typedef enum
{
    SW1,
    SW2
} SwitchButtonType;

/**
 * \brief      Returns the state of a given switch button on the board.
 *
 * \details    A user can enable a button be pressing it down and this
 *             action will cause this function to return true as long as
 *             the button is pressed.
 *
 * \param[in]  Identifier for what switch button to be checked.
 *
 * \return     True if the switch button is enabled. otherwise false.
 */
bool SWBTN_isEnabled(SwitchButtonType switchButton);

#endif /* SWITCH_BUTTON_H_ */
