#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	int x = 0;
	char *strptr, *separ = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
			case 'c':
				printf("%s%c", separ, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", separ, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", separ, va_arg(list, double));
				break;
			case 's':
				strptr = va_arg(list, char *);
				if (!strptr)
					strptr = "(nil)";
				printf("%s%s", separ, strptr);
				break;
			default:
				x++;
				continue;
			}
			separ = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(list);
}
