#include <stdio.h>
#include <math.h>

/**
 * LPF - finds and prints the largest prime factor of a given int
 *
 * @n: the number to be factorized
 *
 * Return: the largest factor lf
 */
long long LPF(long long n)
{
	long long LF = -1;

	while (n % 2 == 0)
	{
		LF = 2;
		n /= 2;
	}

	for (long long i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			LF = i;
			n /= i;
		}
	}

	if (n > 2)
		LF = n;

	return (LF);
}

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long long number = 612852475143;
	long long result = LPF(number);

	printf("%lld\n", result);

	return (0);
}
