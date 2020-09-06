#include <stdio.h>

typedef enum eCompassBearing
{
	NORTH,
	EAST,
	SOUTH,
	WEST
} compassBearing;

typedef enum eDirection
{
	UP,
	RIGHT,
	DOWN,
	LEFT
} direction;

int f(direction d);

int main(void)
{
	f(NORTH);
	compassBearing cB = UP;
	if (cB == UP)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int f(direction d)
{
	if (d != UP)
	{
		printf("The only way is up!");
	}

	return 0;
}
