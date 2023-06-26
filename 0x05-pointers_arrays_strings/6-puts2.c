#include "main.h"
#include "_putchar.c"

/**
 * puts2 - Prints every other character of a string, followed by a new line.
 * @str: The input string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
