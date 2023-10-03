#include <unistd.h>

/**
 * _putchar - print char
 *
 * @ch: The character to be printed
 *
 * Return: On success 1 and -1 on error
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
