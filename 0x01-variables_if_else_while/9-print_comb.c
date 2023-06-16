#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all singel-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int hex;

	for (hex = 0; hex < 10; hex++)
	{
		putchar(hex + '0');

		if (hex != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
