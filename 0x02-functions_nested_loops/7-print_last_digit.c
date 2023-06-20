#include "main.h"
#include "0-putchar.c"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		l *= -1;

	_putchar('0' + l);
	return (l);
}
