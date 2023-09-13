#include "main.h"

/**
 * main - Entry point
 *
 * Description: print fibonanci series
 *
 * Return: always 0
 */

int main(void)
{
	long sum, i;
	long num1 = 0, num2 = 1;
	long sumeven = 0;

	for (i = 0;; i++)
	{
		sum = num1 + num2;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			sumeven += sum;

		num1 = num2;
		num2 = sum;
	}
	printf("%li\n", sumeven);
	return (0);
}
