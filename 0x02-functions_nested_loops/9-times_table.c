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
		for (j = 0; j < cols; j++)
		{
			product = i * j;
			putchar(product / 10 + '0');
			putchar(product % 10 + '0');

			if (j < cols - 1)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
