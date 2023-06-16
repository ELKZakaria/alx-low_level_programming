#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: check a random number asigned
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() % RAND_MAX;
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
		printf("%d is zero\n", n);
	}

	return (0);
}
