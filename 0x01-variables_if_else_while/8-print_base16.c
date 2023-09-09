#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program which prints from Hex numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;
	char Char;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (Char = 'a'; Char <= 'f' ; Char++)
		putchar(Char);
	putchar('\n');
	return (0);
}
