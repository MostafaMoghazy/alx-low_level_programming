#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password of a specified length
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char passwordCharacter;
	int i;

	srand(time(NULL));

	for (i = 0; i < 15; i++)
	{
		passwordCharacter = rand() % 128;
		putchar(passwordCharacter);
	}

	putchar('\n');

	return (0);
}
