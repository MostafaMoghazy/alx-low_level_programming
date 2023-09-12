#include "main.h"

/**
 *  times_table - prints time tables from 0 to 9
 */

void times_table(void)
{
	int product = 1;
	int rows = 10;
	int cols = 10;
	int i, j;

	for (i = 0; i < rows; i++)
	{
		_putchar('0');
		for (j = 1; j < cols; j++)
		{
			_putchar(',');
			_putchar(' ');

			product = i * j;

			if (product < 10)
				_putchar(' ');
			else
				_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
