#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char swap;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		swap = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = swap;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int of = 0, i = 0, j = 0, numa = 0;
	int v1 = 0, v2 = 0, sw_all = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || of == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		sw_all = v1 + v2 + of;
		if (sw_all >= 10)
			of = 1;
		else
			of = 0;
		if (numa >= (size_r - 1))
			return (0);
		*(r + numa) = (sw_all % 10) + '0';
		numa++;
		j--;
		i--;
	}
	if (numa == size_r)
		return (0);
	*(r + numa) = '\0';
	rev_string(r);
	return (r);
}
