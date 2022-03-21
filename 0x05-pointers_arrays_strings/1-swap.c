#include "main.h"

/**
 * swap_int - Swap the values of a and b.
 * @a: the first number
 * @b: the second number
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
