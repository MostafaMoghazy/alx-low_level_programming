#include "main.h"

/**
 * puts2 - prints a string using pointers
 *
 * @str: holds the location of the first charachter of a string
 */

void puts2(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		if (counter % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		counter++;
	}
	_putchar('\n');
}
