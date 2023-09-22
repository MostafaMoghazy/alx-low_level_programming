#include "main.h"

/**
 * base10 - power in 10 base
 * @num: an exponent
 * Return: returns 10 to power exponent
 */

int base10(int num)
{
	int bs = 10;

	while (num > 0)
	{
		bs *= 10;
		num--;
	}
	return (bs);
}

/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int exp;

	exp = base10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
		_putchar('0');

	else
	{
		while (n / exp == 0)
			exp /= 10;

		while (exp >= 1)
		{
			_putchar((n / exp) + '0');
			n %= exp;
			exp /= 10;
		}
	}
}
