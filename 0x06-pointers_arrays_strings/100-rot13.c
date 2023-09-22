#include "main.h"

/**
 * rot13 -  a   function that encodes a string using rot13.
 * @str: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		while ((str[counter] >= 'a' && str[counter] <= 'z') ||
				(str[counter] >= 'A' && str[counter] <= 'Z'))
		{
			if ((str[counter] >= 'a' && str[counter] <= 'm') ||
					(str[counter] >= 'A' && str[counter] <= 'M'))
				str[counter] += 13;
			else
				str[counter] -= 13;
			counter++;
		}
		counter++;
	}
	return (str);
}
