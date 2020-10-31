/**
 * \file main.c
 */

#include "setup.h"
#include "controller.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * \brief      Main function that does setup and runs the controller.
 *
 * \details    Main entry point of the program. Will first setup the system, and
 *             from then on invoke the controller task function repeatedly, as
 *             fast as possible.
 *
 *             This function is intentionally designed to never return.
 *
 * \param      Void.
 *
 * \return     Exit status code, but will in reality never return.
 */
int main(void)
{
    setup();

    for (;;)
    {
        controllerTask();
    }

    assert(false);    /* This line and below lines should never be reached. */

    return EXIT_SUCCESS;
}
