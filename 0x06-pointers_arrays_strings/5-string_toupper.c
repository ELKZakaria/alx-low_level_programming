#include "main.h"

/**
 * string_toupper - change all lower letters of a string to uppercase.
 * @c: variable
 *
 * Description: uppercase.
 *
 * Return: string
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
