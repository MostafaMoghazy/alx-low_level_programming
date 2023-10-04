#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	unsigned int x, length;
	char *ptr;

	x = 0;
	length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	ptr = malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
		return (NULL);

	while ((ptr[x] = str[x]) != '\0')
		x++;

	return (ptr);
}
