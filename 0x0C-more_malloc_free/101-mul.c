#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if ndig char
 * @string: string
 *
 * Return: 0 if nondig, 1 otherwise.
 */
int is_digit(char *string)
{
	int x = 0;

	while (string[x])
	{
		if (string[x] < '0' || string[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @string: string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *string)
{
	int x = 0;

	while (string[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - checks main error
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	char *string1, *string2;
	int lens1, lens2, len;
	int x, hold, dig1, dig2, *res, i = 0;

	string1 = argv[1], string2 = argv[2];
	if (argc != 3 || !is_digit(string1) || !is_digit(string2))
		errors();
	lens1 = _strlen(string1);
	lens2 = _strlen(string2);
	len = lens1 + lens2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (x = 0; x <= lens1 + lens2; x++)
		res[x] = 0;
	for (lens1 = lens1 - 1; lens1 >= 0; lens1--)
	{
		dig1 = string1[lens1] - '0';
		hold = 0;
		for (lens2 = _strlen(string2) - 1; lens2 >= 0; lens2--)
		{
			dig2 = string2[lens2] - '0';
			hold += res[lens1 + lens2 + 1] + (dig1 * dig2);
			res[lens1 + lens2 + 1] = hold % 10;
			hold /= 10;
		}
		if (hold > 0)
			res[lens1 + lens2 + 1] += hold;
	}
	for (x = 0; x < len - 1; x++)
	{
		if (res[x])
			i = 1;
		if (i)
			_putchar(res[x] + '0');
	}
	if (!i)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
