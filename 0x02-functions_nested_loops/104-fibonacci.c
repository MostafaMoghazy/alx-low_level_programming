#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (success).
 */

int main(void)

{
	int i;
	unsigned long num1 = 0, num2 = 1, sum;
	unsigned long num1hal, num1ved, num2hal, num2ved;
	unsigned long hal, ved;

	for (i = 0; i <= 91; i++)
	{
		sum = num1 + num2;
		printf("%lu, ", sum);
		num1 = num2;
		num2 = sum;
	}
	num1hal = num1 / 10000000000;
	num2hal = num2 / 10000000000;
	num1ved = num1 % 10000000000;
	num2ved = num2 % 10000000000;
	for (i = 93; i <= 98; i++)
	{
		hal = num1hal + num2hal;
		ved = num1ved + num2ved;
		if (num1ved + num2ved > 9999999999)
		{
			hal += 1;
			ved %= 10000000000;
		}
		printf("%lu%lu", hal, ved);
		if (i != 98)
			printf(", ");
		num1hal = num2hal;
		num1ved = num2ved;
		num2hal = hal;
		num2ved = ved;
	}
	printf("\n");
	return (0);
}
