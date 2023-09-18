#include "main.h"

/**
 * _strlen - returns the length of a given string using pointers
 *
 * @s: holds the location of the first charachter of a string
 *
 * Return: returns the counter which holds the length of the string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}
