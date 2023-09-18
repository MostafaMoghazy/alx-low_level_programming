#include "main.h"

/**
 * swap_int - swaps between 2 integers using pointers
 *
 * @a: holds the first integer adress
 * @b: holds the second integer adress
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
