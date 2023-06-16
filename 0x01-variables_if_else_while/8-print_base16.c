#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int hex;

	for (hex = 0; hex < 10; hex++)
	{
		putchar(hex + '0');
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');

	return (0);
}
