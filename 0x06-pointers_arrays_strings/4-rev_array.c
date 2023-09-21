#include "main.h"

/**
 * reverse_array - This function reverses array elements
 *
 * @a: holds the location of  the array first element
 * @n: determine the size of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, swap;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		swap = a[j];
		a[j] = a[i];
		a[i] = swap;
	}
}
