#include "main.h"

/**
 * reverse_array - reverse the content
 * @a: variable int
 * @n: variable int
 *
 * Description: reverse.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
