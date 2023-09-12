#include "main.h"

/**
 * print_last_digit - prints the absolute value of the number
 *
 * @num: gives the integer input to the function
 *
 * Return: return last digit value
 */

int print_last_digit(int num)
{
	int last;

	if (num < 0)
		last = (-1 * num) % 10;
	else
		last = num % 10;
	_putchar(last + 48);
	return (last);
}
