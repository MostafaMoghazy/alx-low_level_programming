#include "main.h"

/**
 * print_rev - prints a string using pointers in reverse order
 *
 * @s: holds the location of the first charachter of a string
 */

void print_rev(char *s)
{
	char sinit = *s;

	while (*s != '\0')
	{
		s++;
	}
	s--;
	for (s; *s >= sinit; s--)
		_putchar(*s);
	_putchar('\n');
}
