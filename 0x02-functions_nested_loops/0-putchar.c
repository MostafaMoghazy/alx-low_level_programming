#include "main.h"

/**
 * main - Entry point
 * Describtion: prints _putchar using _putchar prototype
 * Return: always 0 (success)
 */

int main(void)
{
	char charr[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(charr[i]);
	_putchar('\n');

	return (0);
}
