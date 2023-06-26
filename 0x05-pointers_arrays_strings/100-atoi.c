#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sig, res, i;

	sig = 1;
	res = 0;
	i = 0;

	if (s[0] == '-')
	{
		sig = -1;
		i++
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
		}
		else if (res > 0)
		{
			break;
		}
		i++;
	}

	return (sig * res);
}
