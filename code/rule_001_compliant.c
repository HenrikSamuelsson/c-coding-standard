#include <stdio.h>

void f(void);

int main(void)
{
    f();    /* Compiler would detect if any parameters were provided here by mistake. */
    return 0;
}


void f(void)
{
    printf("Invoking f with void type parameter.\n");
}
