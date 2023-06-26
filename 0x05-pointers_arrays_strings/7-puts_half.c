#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The input string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int len, half;

	len = _strlen(str);
	
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;

	for (; half < len; half++)
		printf("%c", str[half]);
	printf("\n");
}
