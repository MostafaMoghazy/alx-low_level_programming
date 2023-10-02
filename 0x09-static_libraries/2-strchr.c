#include "main.h"

/**
 * _strchr - finds a charachter inside a string
 *
 * @s: holds the first location of the string
 * @c: the character to be searched
 *
 * Return: a pointer of the first occurrence or null if !found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
