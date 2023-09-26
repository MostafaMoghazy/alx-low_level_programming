#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int counter;

	unsigned int sum1, sum2nd;

	sum1 = 0;
	sum2nd = 0;

	for (counter = 0; counter < size; counter++)
	{
		sum1 += a[(size * counter) + counter];
		sum2nd += a[(size * (counter + 1)) - (counter + 1)];
	}

	printf("%d, %d\n", sum1, sum2nd);
}
