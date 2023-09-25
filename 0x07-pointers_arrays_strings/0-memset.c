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
    int *ptr = s;
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s = b;
        s++;
    }
    return (ptr);
}
