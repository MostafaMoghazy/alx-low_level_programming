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

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;
		printf("%li", sum);

		num1 = num2;
		num2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
