#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char *const format, ...)
{
    va_list list;
    char *ptrstr, *separ = "";
    int x = 0;

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
                ptrstr = va_arg(list, char *);
                if (!ptrstr)
                    ptrstr = "(nil)";
                printf("%s%s", separ, ptrstr);
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
