#include "main.h"

int sqrtt(int, int);

/**
 * _sqrt_recursion - returns sqrt of num
 * @n: the num to be sqrt calculated
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrtt(n, 0));
}

/**
 * sqrtt - recurses to find the
 * square root of a number
 * @num: number
 * @i: loop
 *
 * Return: the resulting square root
 */
int sqrtt(int num, int i)
{
	if (i * i > num)
		return (-1);
	if (i * i == num)
		return (i);
	return (sqrtt(num, i + 1));
}
