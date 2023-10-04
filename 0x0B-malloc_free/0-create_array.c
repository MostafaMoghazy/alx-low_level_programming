#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array
 *
 * @size: size of the array
 * @c: char init
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x = 0;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (0);

	while (x < size)
	{
		*(ptr + x) = c;
		x++;
	}

	*(ptr + x) = '\0';

	return (ptr);
}
