#include "main.h"

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
  4  * _sqrt - Write a function that returns the natural square
  5  * @n: integer
  6  *
  7  * Description: Write a function that returns the natural square
  8  *
  9  * Return: int
 10  */
int _sqrt(int n, int i)
{
	int s;

	s = i * i;
	if (s > n)
		return (-1);
	if (s == 0)
		return (i);
	return (_sqrt(n, i + 1));
}
