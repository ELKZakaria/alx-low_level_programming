#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 *
 * Description: This function takes two pointers to integers, 'a' and 'b',
 *              and swaps the values stored in the memory locations pointed
 *              to by 'a' and 'b'. After the execution of this function,
 *              the value originally stored in 'a' will be moved to 'b',
 *              and the value originally stored in 'b' will be moved to 'a'.
 */
void swap_int(int *a, int *b)
{
	(*a) = (*a) + (*b);
	(*b) = (*a) - (*b);
	(*a) = (*a) - (*b);
}
