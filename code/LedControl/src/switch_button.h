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

bool SWBTN_isEnabled(SwitchButtonType switchButton);

#endif /* SWITCH_BUTTON_H_ */
