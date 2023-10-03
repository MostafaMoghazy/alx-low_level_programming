#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts str to int
 * @str: string to be converted
 *
 * Return: the integer
 */
int _atoi(char *str)
{
	int length, FU, dg, x, d, n;

	x = 0;
	d = 0;
	n = 0;
	length = 0;
	FU = 0;
	dg = 0;

	while (str[length] != '\0')
		length++;

	while (x < length && FU == 0)
	{
		if (str[x] == '-')
			++d;

		if (str[x] >= '0' && s[x] <= '9')
		{
			dg = s[x] - '0';
			if (d % 2)
				dg = -dg;
			n = n * 10 + dg;
			FU = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			FU = 0;
		}
		x++;
	}

	if (FU == 0)
		return (0);

	return (n);
}

/**
 * main - num * num
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int res, N1, N2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	N1 = _atoi(argv[1]);
	N2 = _atoi(argv[2]);
	res = N1 * N2;

	printf("%d\n", res);

	return (0);
}
