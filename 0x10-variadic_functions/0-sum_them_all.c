#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum
 * @n: number of arguments passed
 *
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	int summation = 0;

	va_start(list, n);

	for (x = 0; x < n; x++)
		summation += va_arg(list, int);

	va_end(list);

	return (summation);
}
