#include "main.h"

/**
 * _isalpha - checks for lowercase or uppercase character
 *
 * @c: gives the input to the function from the ascii table
 *
 * Return: returns 1 if 'c' is an alphabet lower or upper
 *         otherwise return 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
