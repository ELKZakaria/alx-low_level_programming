#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: char
 * @s2: char
 *
 * Return: two string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *s;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	if (s1 == NULL)
		S1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1)
		i++;

	while (s2)
		j++;

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
