#include "main.h"

/**
 * _strncpy - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number
 *
 * Description: function concatenates.
 *
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
