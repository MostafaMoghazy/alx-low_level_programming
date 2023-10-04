#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: 1st arg
 * @av: 2nd arg
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int x, y;
	int z = 0, length = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			length++;
	}
	length += ac;

	ptr = malloc(sizeof(char) * length + 1);
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			ptr[z] = av[x][y];
			z++;
		}
		if (ptr[z] == '\0')
		{
			ptr[z++] = '\n';
		}
	}
	return (ptr);
}
