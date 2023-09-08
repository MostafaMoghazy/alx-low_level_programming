#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * Description: printing without using stdio header file
 *	using write function
 * Return: 1 (fail)
*/

int main(void)
{
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, arr, strlen(arr));
	return (1);
}
