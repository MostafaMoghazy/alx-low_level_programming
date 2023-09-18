#include "main.h"

/**
 * puts2 - prints a string using pointers
 *
 * @str: holds the location of the first charachter of a string
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
