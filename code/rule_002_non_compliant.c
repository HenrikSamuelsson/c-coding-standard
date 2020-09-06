
#include <stdio.h>

#define NORTH   0
#define	EAST    1
#define SOUTH   2
#define	WEST    3

#define UP      0
#define RIGHT   1
#define DOWN    2
#define	LEFT    3

int f(int direction);

int main(void)
{
	f(NORTH);
	int bearing = UP;
	if (bearing == UP)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int f(int direction)
{
	if (direction != UP)
	{
		printf("The only way is up!");
	}

	return 0;
}
