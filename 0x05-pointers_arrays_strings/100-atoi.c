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
	unsigned int result = 0;
	int sign = 1;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
		}
		else if (result > 0)
			break;
	} while (*s++);

	return (result * sign);
}
