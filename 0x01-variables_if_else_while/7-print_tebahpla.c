#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program which prints from z to a then endl
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char Char;

	/*prints form z to a*/
	for (Char = 'z'; Char >= 'a'; Char--)
	{
		putchar(Char);
	}
	putchar('\n');
	return (0);
}
