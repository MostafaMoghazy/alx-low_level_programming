#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program which prints from a to z except q & e then endl
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Char;

	for (Char = 'a'; Char <= 'z'; Char++)
	{
		if (Char == 'e' || Char == 'q')
			continue;
		putchar(Char);
	}
	putchar('\n');
	return (0);
}
