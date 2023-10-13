#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - prints all types
* @format: format
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int x = 0, star = 0;
	char *ptr;

	va_start(list, format);
	while (format && format[x] != '\0')
	{
		switch (format[x])
		{ case 'c':
			switch (star)
			{ case 1: printf(", "); }
			star = 1;
			printf("%c", va_arg(list, int));
			break;
			case 'i':
			switch (star)
			{ case 1: printf(", "); }
			star = 1;
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			switch (star)
			{ case 1: printf(", "); }
			star = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (star)
			{ case 1: printf(", "); }
			star = 1;
			ptr = va_arg(list, char*);
			if (ptr)
			{ printf("%s", ptr);
			break; }
			printf("%p", ptr);
			break; }
		x++;
	}
	printf("\n");
	va_end(list);
}
