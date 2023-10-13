#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	char *ptrstr;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		ptrstr = va_arg(list, char *);
		if (!ptrstr)
			ptrstr = "(nil)";
		if (!separator)
			printf("%s", ptrstr);
		else if (separator && x == 0)
			printf("%s", ptrstr);
		else
			printf("%s%s", separator, ptrstr);
	}

	printf("\n");

	va_end(list);
}
