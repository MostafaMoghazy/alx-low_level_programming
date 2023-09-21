#include "main.h"

/**
 * _strcmp - compares between two strings
 *
 * @s1: holds the location of the first string
 * @s2: holds the location of the second string
 *
 * Return: 0 if true and otherwise when false
 */

int _strcmp(char *s1, char *s2)
{
	int i, check;

	check = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			check = ((int)s1[i] - (int)s2[i]);
			break;
		}
	}
	return (check);
}
