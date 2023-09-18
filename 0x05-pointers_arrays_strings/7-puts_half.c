#include "main.h"

/**
 * puts_half - prints last half n chars of a string
 *
 * @str: holds the location of the string to be reversed
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (j = i < i / 2 - 1; j < i; j++)
	{
		_putchar(str[j]);
	}
}
