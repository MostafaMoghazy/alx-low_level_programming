#include "main.h"

/**
 * _puts - prints a string using pointers
 *
 * @str: holds the location of the first charachter of a string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
