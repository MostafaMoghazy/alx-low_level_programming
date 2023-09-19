#include "main.h"

/**
 * _atoi - convert a string to int
 *
 * @s: holds the string memory location
 *
 * Return: returns the integer value or 0 if there is no ints
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
	{
		s++;
	}

	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	while (*s >= 0 && *s <= 9)
	{
		result = result * 10 + (*s + '0');
		s++;
	}
	return (result * sign);
}
