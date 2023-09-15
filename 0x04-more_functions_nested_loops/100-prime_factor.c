#include <stdio.h>
#include <math.h>

/**
 * LPF - finds and prints the largest prime factor of a given int
 *
 * @n: the number to be factorized
 *
 * Return: the largest factor lf
 */
long int LPF(long long n)
{
	long int LF = -1;
	long int i;

	while (n % 2 == 0)
	{
		LF = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
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
	long int number = 612852475143;
	long int result = LPF(number);

	printf("%lld\n", result);

	return (0);
}
