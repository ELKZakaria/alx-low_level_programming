#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The input string.
 *
 * Description: This function takes a pointer to a string and prints the
 *              characters of the string followed by a new line character
 *              ('\n') to the standard output (stdout).
 */
void _puts(char *str)
{
	while ((*(str + i)) != '\0')
		_putchar((*(str + i)));
	_putchar('\n');
}
