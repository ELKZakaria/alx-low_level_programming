#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and prints its last digit.
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(NULL));
	n = rand();
	lastdigit = n % 10;

	printf("Last digit of %d is %d ", n, lastdigit);

	if (lastdigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastdigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
