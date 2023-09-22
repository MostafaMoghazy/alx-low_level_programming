#include <stdio.h>

/**
 * main - entry point
 * Return: 0 success
 */
int main(void)
{
	int num;
	int array[5];
	int *ptr;

	array[2] = 1024;
	ptr = &num;

	*(ptr + 5) = 98;
	printf("a[2] = %d\n", array[2]);
	return (0);
}
