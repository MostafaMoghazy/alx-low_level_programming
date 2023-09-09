#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program which prints from a to z then endl
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char Char;

	for (Char = 'a'; Char <= 'z'; Char++)
	{
		putchar(Char);
	}
	putchar('\n');
	return (0);
}
