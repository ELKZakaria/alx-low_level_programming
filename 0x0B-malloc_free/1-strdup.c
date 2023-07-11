#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: char pointer
 *
 * Return: returns a pointer to a newly allocated
 */
char *_strdup(char *str)
{
	int a, i;
	char *s;

	if (str == NULL)
		return (NULL);

	a = 0;
	i = 1;

	if (str)
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
