#include "setup.h"
#include "controller.h"



#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    setup();

    for (;;)
    {
        controllerTask();
    }

    return EXIT_SUCCESS;
}

