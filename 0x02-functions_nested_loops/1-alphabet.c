#include "main.h"

/**
 * print_alphabet - check code
 *
 * Description: Prints the lowercase alphabet using _putchar
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
