#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The input string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int len, begin, end;

	len = 0;
	begin = 0;

	while (s[len] != '\0')
		len++;

	end = len - 1;

	while (begin < end)
	{
		char tmp;

		tmp = s[begin];
		s[begin] = s[end];
		s[end] = tmp;

		begin++;
		end--;
	}
}
