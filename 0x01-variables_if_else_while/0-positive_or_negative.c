#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and checks if it is negative, positive, or zero.
 *
 * Return: 0 (success)
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
		printf("%d is zero\n", n);
	}

	return (0);
}

