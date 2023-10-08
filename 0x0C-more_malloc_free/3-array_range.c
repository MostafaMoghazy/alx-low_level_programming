#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
    int x, s;
    int *pointer;

    if (min > max)
        return (NULL);

    s = max - min + 1;

    pointer = malloc(sizeof(int) * s);

    if (pointer == NULL)
        return (NULL);

    for (x = 0; min <= max; x++)
        pointer[x] = min++;

    return (pointer);
}
