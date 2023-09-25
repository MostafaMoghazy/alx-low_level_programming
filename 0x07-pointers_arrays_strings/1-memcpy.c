#include "main.h"

/**
 * _memcpy - fills the first n bytes of the memory area pointed to by s with byte b
 *
 * @dest: holds the first location of the portion to be filled
 * @src: holds the first location of the portion to be filled with
 * @n: ths number of bytes to be filled
 *
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; n--, i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
