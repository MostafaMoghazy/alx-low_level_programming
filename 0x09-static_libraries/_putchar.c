#include <unistd.h>
#include "main.h"

/**
 * _putchar writes the charachter to stdo
 * ch: the caracher to be printed
 *
 * Return: 1 (success)
 */

int _putchar(char ch)
{
    return (write(1, &ch, 1));
}
