#include <stdio.h>
#include <stdint.h>

/* Non compliant doxygen comment block due to missing \brief. */

/**
 *         Get voltage level.
 *
 *         Getter function for
 *         supply voltage level.
 *         Unit of returned value
 *         is in mV.
 *
 * \return Voltage level.
 */
int getVoltage(void);

int main(void)
{
    float volstage = (float) getVoltage() / 1000;
    printf("Voltage = %f V\n", volstage);
}

int getVoltage(void)
{
    return 3300;    /* 3.3 V */
}
