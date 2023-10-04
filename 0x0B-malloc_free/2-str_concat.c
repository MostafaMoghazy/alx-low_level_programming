#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: dim1
 * @s2: dim2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr, *ret;
	unsigned int dim1 = 0, dim2 = 0;

	ptr = s1;
	if (s1)
		while (*ptr++)
			dim1++;
	else
		s1 = "";

	ptr = s2;
	if (s2)
		while (*ptr++)
			dim2++;
	else
		s2 = "";

	ret = malloc(dim1 + dim2 + 1);
	if (!ret)
		return (NULL);

	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;

	return (ret);
}
