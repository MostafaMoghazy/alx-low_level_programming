#include "main.h"

/**
 * more_numbers - print numbers form 0 to 14
 */

void more_numbers(void)
{
	int num, i;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar(1 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
