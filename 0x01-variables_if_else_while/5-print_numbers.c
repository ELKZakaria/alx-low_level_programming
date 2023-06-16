#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single numbers of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
