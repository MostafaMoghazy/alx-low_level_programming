#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory
 * @a: memory area to be filled
 * @c: char to be filled with
 * @n: repititions
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *a, char c, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		a[x] = c;
	}

	return (a);
}

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: array size
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
