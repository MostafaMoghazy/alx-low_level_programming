#include "main.h"
/**
 * wildcmp - compares two strs and returns 1
 * if t identical otherwise return 0.
 * @s1: sring
 * @s2: special string with "*"
 *
 * Return: 1 if identical and 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
