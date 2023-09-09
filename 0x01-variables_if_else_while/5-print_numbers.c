#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program which prints from 0 to 9 endl
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
