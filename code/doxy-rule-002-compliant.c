#include <stdio.h>
#include <stdint.h>

/* Compliant way to use \brief in doxygen comment block below */

/**
 * \brief   Get voltage level.
 *
 * \param   Void.
 * \return  The voltage level.
 */
int getVoltage(void);

int main(void)
{
    printf("Doxygen rule 002.");
}

int getVoltage(void)
{
    return 3300;    /* 3.3 V */
}
