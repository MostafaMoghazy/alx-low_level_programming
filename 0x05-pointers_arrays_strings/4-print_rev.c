#include "main.h"

/**
 * print_rev - prints a string using pointers in reverse order
 *
 * @s: holds the location of the first charachter of a string
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
