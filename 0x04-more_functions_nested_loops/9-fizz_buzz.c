#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the numbers from 1 to 100 according to the Fizz-Buzz
 *              For multiples of three, it prints "Fizz".
 *              For multiples of five, it prints "Buzz".
 *              For numbers that are multiples of both three and five
 *              Each number or word is separated by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
