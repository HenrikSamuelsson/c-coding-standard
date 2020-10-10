#include <stdlib.h>

int squareArea(int width)
{
    return width * width;
}

int main(void)
{
    int w = 5;
    printf(squareArea(w));

    return EXIT_SUCCESS;
}
