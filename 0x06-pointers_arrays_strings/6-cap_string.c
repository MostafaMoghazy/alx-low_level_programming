#include "main.h"
#include <string.h>
#include <ctype.h>

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
 * cap_string - This function capetalize the string
 *
 * @str: holds the location of the string's first element
 *
 * Return: returns a pointer of the string after capetalizing
 */

char *cap_string(char *str)
{
	int len = strlen(str);
	int capitalizeNext = 1, i;

	for (i = 0; i < len; i++)
	{
		if (isSeparator(str[i]))
		{
			capitalizeNext = 1;
		}
		else if (capitalizeNext)
		{
			str[i] = toupper(str[i]);
			capitalizeNext = 0;
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}

	return (str);
}
