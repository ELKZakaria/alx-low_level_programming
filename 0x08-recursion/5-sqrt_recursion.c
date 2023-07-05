#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Write a function that returns the natural square
 * @n: integer
 *
 * Description: Write a function that returns the natural square
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Write a function that returns the natural square
 * @n: integer
 * @i: integer
 *
 * Description: Write a function that returns the natural square
 *
 * Return: int
 */
int _sqrt(int n, int i)
{
	int s;

	s = i * i;
	if (s > n)
		return (-1);
	if (s == n)
		return (i);
	return (_sqrt(n, i + 1));
}
