#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: variable char
 * @b: constant bye
 * @n: memory area pointed
 *
 * Description: fills memory
 *
 * Return: char success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
