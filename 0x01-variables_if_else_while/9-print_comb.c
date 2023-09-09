#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program which prints from all possible combinations
 * of single-digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;
	char Char;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
