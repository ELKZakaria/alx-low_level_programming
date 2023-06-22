#include "main.h"
#include "_putchar.c"

/**
 * print_numbers - print from 0 to 9 *
 */
void print_numbers(void)
{
	int i;

	for (i; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
