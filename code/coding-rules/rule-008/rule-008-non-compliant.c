/**
 * \file rule-008-non-compliant.c
 */
#include <stdlib.h>

int main(void)
{
#if 0
    printf("Now in main().\n");
#endif
    printf("Hello world!\n");

    return EXIT_SUCCESS;
}
