#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat -  concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: unsigned int
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *s;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1)
		i++;
	while (s2)
		j++;
	if (n >= j)
		l = i + j;
	else
		l = i + n;

	s = malloc(sizeof(char) * l + 1);
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
		k++
	}
	s[k] = '\0';
	return (s);
}
