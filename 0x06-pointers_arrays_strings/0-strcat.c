#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string
 *
 * @dest: holds the location of the first sring
 * @dest: holds the location of the secin sring
 *
 * Return: returns the value of the string after cat
 */

char *_strcat(char *dest, char *src)
{
    char *ptr;

    *ptr = *src + *dest;
    return (*ptr);
}
