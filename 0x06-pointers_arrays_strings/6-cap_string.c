#include "main.h"

/**
 * cap_string - This function capetalize the string
 *
 * @string: holds the location of the string's first element
 *
 * Return: returns a pointer of the string after capetalizing
 */

char *cap_string(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == " ")
		{
			i++;
			if (string[i] >= 97 && string[i] <= 122)
			{
				string[i] = string[i] - 32;
			}
		}
	}
	return (string);
}
