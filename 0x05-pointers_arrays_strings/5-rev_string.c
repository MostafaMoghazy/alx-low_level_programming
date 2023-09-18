#include "main.h"

/**
 * rev_string - reverse a given string using pointers
 *
 * @s: holds the location of the string to be reversed
 */

void rev_string(char *s)
{
    int i, j, swap;

    for (i = 0; *s != '\0'; i++)
        ;

    for (j = 0; j < i / 2; j++)
    {
        swap = s[j];
        s[j] = s[i - 1 - j];
        s[i - 1 - j] = swap;
    }
}
