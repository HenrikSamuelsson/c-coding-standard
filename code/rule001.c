#include <stdio.h>

void g();
void f(void);

int main(void)
{
    g(1, 2);
    f();

    return 0;
}

void g(int i, int j)
{
    printf("%d %d", i, j);
    printf("\n");
}

void f(void)
{
    printf("Invoking f with void type parameter");
}
