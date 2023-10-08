#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to postallocated mem
 * @old_size: old size of mem
 * @new_size: new size of mem
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *postpointer;
	char *newpointer;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	newpointer = malloc(new_size);
	if (!newpointer)
		return (NULL);

	postpointer = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			newpointer[x] = postpointer[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			newpointer[x] = postpointer[x];
	}

	free(ptr);
	return (newpointer);
}
