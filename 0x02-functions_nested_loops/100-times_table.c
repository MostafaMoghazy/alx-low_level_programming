#include "main.h"

/**
 *  print_times_table - prints time tables from 0 to 9
 * @n: takes input int
 */

void print_times_table(int n)
{
	int product = 1;
	int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				product = i * j;

				if (product < 10)
					_putchar(' ');
				if (product < 100)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar((product / 10) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
					_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
