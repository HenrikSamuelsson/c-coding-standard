#include <stdio.h>
#include <stdlib.h>

enum compliantEnum_1
{
    C1_E1,
    C1_E2,
    C1_E3
};

enum compliantEnum_2
{
    C2_E1 = 1,
    C2_E2,
    C2_E3
};

enum compliantEnum_3
{
    C3_E1 = 1,
    C3_E2 = 3,
    C3_E3 = 4
};

enum nonCompliantEnum
{
    NC_E1 = 1,
    NC_E2,
    NC_E3 = 2
};

void f(int *a,
       int *b,
       int *x)
{
  *a += *x;
  *b += *x;
}

void g(int *restrict a,
       int *restrict b,
       int *restrict x)
{
  *a += *x;
  *b += *x;
}

void h(char *);

int main(void)
{
    printf("Hello world!\n");

    const char *str = "hello";
    h((char *) str);
    return EXIT_SUCCESS;
}

void h(char * c)
{
    printf("%c", *c);
}