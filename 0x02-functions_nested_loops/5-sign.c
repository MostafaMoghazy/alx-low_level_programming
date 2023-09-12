#include "main.h"

/**
 * print_sign - prints the sign of a numebr
 *
 * @c: gives the input to the function
 *
 * Return: returns 1 if + , 0 if 0 , -1 if -
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
