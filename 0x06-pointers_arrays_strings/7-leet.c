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
	char leetMap[128];

	memset(leetMap, 0, sizeof(leetMap));

	leetMap['a'] = leetMap['A'] = '4';
	leetMap['e'] = leetMap['E'] = '3';
	leetMap['o'] = leetMap['O'] = '0';
	leetMap['t'] = leetMap['T'] = '7';
	leetMap['l'] = leetMap['L'] = '1';

	size_t len = strlen(str);
	char *encoded = (char *)malloc((len + 1) * sizeof(char));
	size_t i = 0;

	for (; i < len; i++)
	{
		char currentChar = str[i];
		char replacement = leetMap[currentChar];

		encoded[i] = (replacement != '\0') ? replacement : currentChar;
	}

	encoded[i] = '\0';

	return (encoded);
}
