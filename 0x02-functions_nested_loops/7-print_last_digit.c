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
	_putchar('0' + n % 10);
	return (n % 10);
}
