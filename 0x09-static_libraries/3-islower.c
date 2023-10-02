#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: gives the input to the function from the ascii table
 *
 * Return: returns 1 if 'c' is lowercase
 *         otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
