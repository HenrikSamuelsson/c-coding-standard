#include <stdlib.h>

int squareArea(int width, int height)
{
    return width * width;
}

int main(void)
{
    int w = 5;
    int h = 5;
    printf(squareArea(w, h));

    return EXIT_SUCCESS;
}
