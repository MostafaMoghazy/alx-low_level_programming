#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with byte b
 *
 * @s: holds the first location of the portion to be filled
 * @b: the constant byte which fills the memory
 * @n: ths number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; n > 0; n--, i++)
    {
        s[i] = b;
    }
    return (s);
}
