#include "main.h"

/**
 * factorial - evaluating n factorial
 * @n: number to be fact evaluated
 *
 * Return: n factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
