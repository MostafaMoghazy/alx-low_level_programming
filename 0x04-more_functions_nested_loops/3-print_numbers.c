#include "main.h"

/**
 * print_numbers - print numbers form 0 to 9
 *
 * Return: 0 (success)
 */

void print_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
