#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string
 *
 * @dest: holds the location of the first sring
 * @src: holds the location of the secin sring
 *
 * Return: returns the value of the string after cat
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}
