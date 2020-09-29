#include <stdio.h>
#include <stdint.h>

/* Compliant way to use \details in doxygen comment block below */

/**
 * \brief   Get voltage level.
 *
 * \details Returns battery voltage
 *          level, as an integer value 
 *          in mV. For example 3.3 V 
 *          will be returned as 3300.
 *
 * \param   Void.
 * \return  The voltage level.
 */
int getVoltage(void);

int main(void)
{
    printf("Doxygen rule 003 .");
}

int getVoltage(void)
{
    return 3300;    /* 3.3 V */
}
