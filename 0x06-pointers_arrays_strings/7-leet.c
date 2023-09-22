#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * leet - encodes
 * @str: holds a location
 * Return: encoded
 */
char *leet(char *str)
{
	unsigned int i;
	char *encoded = str;
	int Quema[] = {4, 3, 0, 7, 1};
	char K[] = {'A', 'E', 'O', 'T', 'L'};

	while (*str)
	{
		for (i = 0; i < sizeof(K) / sizeof(char); i++)
		{
			if (*str == K[i] || *str == K[i] + 32)
			{
				*str = 48 + Quema[i];
			}
		}
		str++;
	}
	return (encoded);
}
