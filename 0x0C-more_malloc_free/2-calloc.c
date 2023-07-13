#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - check the code
 * @nmemb: int
 * @size: int
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, j;
	char *p;

	i = 0;
	j = 0;
	if (nmemb == 0 || size == 0)
		return 	(NULL);
	j = nmemb * size;
	p = malloc(j);

	if (p == NULL)
		return (NULL);

	while (i < j)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
