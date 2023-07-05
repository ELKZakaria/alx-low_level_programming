#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: char pointer
 *
 * Description: Write a function that returns the length of a string.
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
