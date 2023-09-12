#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 *
 * @num: the number the list begin with
 */

void print_to_98(int num)
{
	int i;

	if (num > 98)
		for (i = num; i > 98; i--)
			printf("%d, ", i);
	else
		for (i = num; i < 98; i++)
			printf("%d, ", i);
	printf("98");
}
