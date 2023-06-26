#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 *
 * Description: This function takes a pointer to a string and calculates the
 *              length of the string by iterating through it until it reaches
 *              the null terminator '\0'. It returns the length of the string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while ((*(s + len)) != '\0')
		len++;

	return (len);
}
