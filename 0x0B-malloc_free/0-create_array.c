#include "main.h"

/**
 * create_array - create an array of chars.
 * @size: unsigned int
 * @c: char
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
