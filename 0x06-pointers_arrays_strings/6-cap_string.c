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
 * cap_string - This function capitalizes the string
 *
 * @str: holds the location of the string's first element
 *
 * Return: returns a pointer of the string after capitalizing
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isSeparator(str[i]))
		{
			if (str[i + 1] != '\0' && isalpha(str[i + 1]))
			{
				str[i + 1] = toupper(str[i + 1]);
			}
		}
		else if (i == 0 || !isalpha(str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}

	return (str);
}
