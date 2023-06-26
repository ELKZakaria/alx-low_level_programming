#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The input string.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
