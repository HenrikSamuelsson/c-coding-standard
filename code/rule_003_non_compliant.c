#include <stdio.h>

void f(char *data_p);

int main(void)
{
    char m[] = "Foo";
    const char *mp = m;
    f((char*) mp);

    return 0;
}

void f(char *data_p)
{
    *data_p = 'B';
    printf("%s", data_p);
}
