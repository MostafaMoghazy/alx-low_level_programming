#include "main.h"

/**
 * print_rev - prints a string using pointers in reverse order
 *
 * @s: holds the location of the first charachter of a string
 */

void print_rev(char *s)
{
	char sinit = *s;

	if (s == NULL || *s == '\0')
	{
		_putchar('\n');
		return;
	}

	while (*s != '\0')
	{
		s++;
	}
	while (s--)
	{
		_putchar(*s);
		if (*s == sinit)
			break;
	}
	_putchar('\n');
}
