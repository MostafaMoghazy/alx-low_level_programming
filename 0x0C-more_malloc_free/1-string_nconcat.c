#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;
	char *string;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		string = malloc(sizeof(char) * (len1 + n + 1));
	else
		string = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!string)
		return (NULL);

	while (x < len1)
	{
		string[x] = s1[x];
		x++;
	}

	while (n < len2 && x < (len1 + n))
		string[x++] = s2[y++];

	while (n >= len2 && x < (len1 + len2))
		string[x++] = s2[y++];

	string[x] = '\0';

	return (string);
}
