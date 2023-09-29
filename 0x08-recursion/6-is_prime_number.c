#include "main.h"

int primee(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primee(n, n - 1));
}

/**
 * primee - prime or not using recursion
 * @n: number
 * @i: loop
 *
 * Return: 1 if prime, 0 if not
 */
int primee(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (primee(n, i - 1));
}
