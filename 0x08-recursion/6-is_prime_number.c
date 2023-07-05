#include "main.h"

int check_prime(int n, int i);
/**
 * is_prime_number - return 1 is a prime number or return 0
 * @n: integer
 *
 * Description: description
 *
 * Return: int
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - return 1 is a prime number or return 0
 * @n: integer
 * @i: integer
 *
 * Description: description
 *
 * Return: int
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
