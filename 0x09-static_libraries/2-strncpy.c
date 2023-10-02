#include "main.h"

/**
 * _strncpy - This function coppies the src string to the dest string
 *
 * @dest: holds the location of the first sring
 * @src: holds the location of the secin sring
 * @n: determine the max concatination chars from the second string
 *
 * Return: returns the value of the string after cp
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
