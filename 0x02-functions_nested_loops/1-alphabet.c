#include "main.h"

/**
 * print_alpahbet: prints from a to z using _putchar
 */

void print_alphabet(void)
{
    int i;

    for (i = 'a'; i <= 'z'; i++)
        _putchar(i);
    putchar('\n')
}
