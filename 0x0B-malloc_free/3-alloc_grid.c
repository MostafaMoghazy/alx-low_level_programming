#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: 1st size
 * @height: 2nd size
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **g;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		g[x] = malloc(width * sizeof(int));
		if (g[x] == NULL)
		{
			while (x >= 0)
				free(g[x--]);
			free(g);
			return (NULL);
		}

		for (y = 0; y < width; y++)
			g[x][y] = 0;
	}

	return (g);
}
