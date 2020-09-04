#include <stdio.h>

void f();

int main(void)
{
    f(1);    /* A parameter is provided by mistake, compiler will not notice. */

    return 0;
}


void f()
{
    printf("Invoking function called f.\n");
}
