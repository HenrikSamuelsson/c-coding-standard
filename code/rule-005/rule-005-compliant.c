#include <stdbool.h>
#include <stdlib.h>

/*
 * For documenting intentional null
 * statements that do nothing.
 */
#define DO_NOTHING

#define TEMP_MIN    18U
#define TEMP_MAX    25U

static bool systemInitialized = false;

int main(void)
{
    initializeSystem();

    volatile int engineTemperature = 0;

    startWarmup();

    for (;;)
    {
        if (timeOut())
        {
            abort();
        }
        else
        {
            DO_NOTHING;
        }
    }

    return EXIT_SUCCESS;
}

void initializeSystem(void)
{
    systemInitialized = true;
}

void temperatureControlTask(void)
{
    int temperature = 0;

    temperature = getTemperature();

    if (temperature < TEMP_MIN)
    {
        turnOnHeater();
    }
    else if (temperature > TEMP_MAX)
    {
        turnOffHeater();
    }
    else
    {
        DO_NOTHING;
    }
}
