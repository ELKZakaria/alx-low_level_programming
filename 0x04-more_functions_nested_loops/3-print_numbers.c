#include "main.h"
#include "_putchar.c"

/**
 * print_numbers - print from 0 to 9 *
 */
void print_numbers(void)
{
	char c;

	for (c; c < '10'; c++)
	{
		_putchar('0' + c);
	}
	_putchar('\n');
}
