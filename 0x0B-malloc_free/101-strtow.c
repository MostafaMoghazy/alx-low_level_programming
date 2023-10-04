#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - free char
 * @ddptr: argument1
 * @height: argument2
 */
void ch_free_grid(char **ddptr, unsigned int height)
{
	if (ddptr != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(ddptr[height]);
		free(ddptr[height]);
		free(ddptr);
	}
}
/**
 * strtow - split str
 * @str: string to be splitted
 * Return: 0
 */
char **strtow(char *str)
{
	char **dptr;
	unsigned int x, height, i, j, z;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (x = height = 0; str[x] != '\0'; x++)
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			height++;
	dptr = malloc((height + 1) * sizeof(char *));
	if (dptr == NULL || height == 0)
	{
		free(dptr);
		return (NULL);
	}
	for (i = z = 0; i < height; i++)
	{
		for (x = z; str[x] != '\0'; x++)
		{
			if (str[x] == ' ')
				z++;
			if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			{
				dptr[i] = malloc((x - z + 2) * sizeof(char));
				if (dptr[i] == NULL)
				{
					ch_free_grid(dptr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; z <= x; z++, j++)
			dptr[i][j] = str[z];
		dptr[i][j] = '\0';
	}
	dptr[i] = NULL;
	return (dptr);
}
