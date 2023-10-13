#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameteron each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
