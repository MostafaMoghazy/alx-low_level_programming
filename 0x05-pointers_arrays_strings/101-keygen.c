#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: Always 0 (Success)
**/

int main(void)
{
	int pass;
	char ch;

	srand(time(NULL));
	pass = 0;
	while (pass <= 2645)
	{
		ch = rand() % 128;
		pass += ch;
		putchar(ch);
	}
	putchar(2772 - pass);
	return (0);
}
