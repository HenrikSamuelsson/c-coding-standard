/*!
 * \file switch.h
 */

#ifndef SWITCH_H_
#define SWITCH_H_

#include "stdbool.h"

/**
 * \brief      The named switch buttons on the board.
 */
typedef enum
{
    SW1,
    SW2
} SwitchType;

bool SWITCH_isEnabled(SwitchType switchButton);

#endif /* SWITCH_H_ */

