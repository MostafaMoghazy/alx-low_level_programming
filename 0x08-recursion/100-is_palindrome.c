#include "main.h"

int ispal(char *s, int i, int len);
int strln(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
    if (*s == 0)
        return (1);
    return (ispal(s, 0, strln(s)));
}

/**
 * ispal - checks the characters recursively for palindrome
 * @str: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int ispal(char *str, int i, int len)
{
    if (*(str + i) != *(str + len - 1))
        return (0);
    if (i >= len)
        return (1);
    return (ispal(str, i + 1, len - 1));
}

/**
 * strln - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int strln(char *str)
{
    if (*str == '\0')
        return (0);
    return (1 + strln(str + 1));
}
