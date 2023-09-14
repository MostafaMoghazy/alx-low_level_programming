#include "main.h"

/**
 * print_line - prints a line using ('_')
 *
 * @n: input to control number of undersocres
 */

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
		_putchar('_');
	_putchar('\n');
}
