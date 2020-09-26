#include <stdio.h>
#include <stdlib.h>

/**
 * \brief      Copies RAM data.
 *
 * \details    Copies a given number
 *             af bytes from a source
 *             memory area to a
 *             destination memory
 *             area, where areas may
 *             not overlap.
 *
 *             Dest is where a number
 *             of data bytes will be
 *             copied from src.
 *
 * \return     Void.
 */
void memcpy(void *dest,
            const void *src,
            size_t n);

int main(void)
{
    printf("Non compliant way of "
           "documenting function "
           "parameters. /n");

    return EXIT_SUCCESS;
}