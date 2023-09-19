#include "main.h"

/**
 * _strcpy - copies a string from source to distencation using pointers
 *
 * @dest: is the destnation pointer
 *
 * @src: is the source pointer
 *
 * Return: returns the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
