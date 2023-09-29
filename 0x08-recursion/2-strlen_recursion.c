#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int strln(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strln(s + 1));
}
