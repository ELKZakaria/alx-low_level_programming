#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random number
 *
 * description - check the numbre if signed or unsigned
 *
 * result: 0 (sucess)
 */
int main(void)
{
	srand(time(NULL));

	int n = rand() % RAND_MAX;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero", n);
	}

	return (0);
}
