#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program which prints from 0 to 9 endl without printf
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
