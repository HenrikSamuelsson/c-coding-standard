/**
 * \file led.h
 */

#ifndef LED_H_
#define LED_H_

typedef enum
{
    RED_LED,
    GREEN_LED,
    BLUE_LED
} LedType_t;

void turnOn(LedType_t ledType);

#endif /* LED_H_ */
