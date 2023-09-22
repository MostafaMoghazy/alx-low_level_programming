#include "main.h"
#include <stdio.h>

/**
 * IsLower - determines if lower
 * @ch: character
 * Return: 1 or 0
 */

int IsLower(char ch)
{
	return (ch >= 97 && ch <= 122);
}

/**
 * isSeparator - to check if a character is a word separator
 * @c: holds a value
 * Return: 0 or 1
 */
int isSeparator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - This function capitalizes the string
 *
 * @s: holds the location of the string's first element
 *
 * Return: returns a pointer of the string after capitalizing
 */
char *cap_string(char *s)
{
	int fs = 1;

	while (*s)
	{
		if (isSeparator(*s))
			fs = 1;
		else if (IsLower(*s) && fs)
		{
			*s -= 32;
			fs = 0;
		}
		else
			fs = 0;
		s++;
	}
	return (s);
}
