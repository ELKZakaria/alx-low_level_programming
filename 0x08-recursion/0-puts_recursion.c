#include "main.h"

/**
 * _puts_recursion - prints a strings
 * @s: pointer char
 *
 * Description: Write a function that prints a string, followed by a new line.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
