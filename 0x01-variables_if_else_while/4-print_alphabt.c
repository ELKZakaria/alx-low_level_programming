#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
