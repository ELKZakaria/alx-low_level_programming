#include "main.h"

/**
 * _isdigit - checks digit.
 * @c: the digit to check
 * Return: 1 if @c is digit 0 otherwise
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
