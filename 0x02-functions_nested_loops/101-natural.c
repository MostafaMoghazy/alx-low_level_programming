#include "main.h"

/**
 * main - Entry point
 *
 * Description: print some nums
 *
 * Return: always 0
 */

int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	printf("%d\n", sum);
	return (0);
}
