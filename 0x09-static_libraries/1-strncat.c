#include "main.h"

/**
 * _strncat - This function appends the src string to the dest string
 *
 * @dest: holds the location of the first sring
 * @src: holds the location of the secin sring
 * @n: determine the max concatination chars from the second string
 *
 * Return: returns the value of the string after cat
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i++] = src[j];

	return (dest);
}
