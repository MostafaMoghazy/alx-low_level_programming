#include "main.h"

/**
 * string_toupper - This function chanes string to upper
 *
 * @string: holds the location of the string's first element
 *
 * Return: returns a pointer of the string after converting to upper
 */

char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 97 && string[i] <= 122)
		{
			string[i] = string[i] - 32;
		}
	}
	return (string);
}
