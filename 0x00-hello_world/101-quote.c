#include <unistd.h>

/**
 * main - Entry point
 * Description: printing without using stdio header file
 *	using write function
 * Return: 1 (fail)
*/

int main(void)
{
	char arr_ch = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, arr_ch, sizeof(arr_ch) / sizeof(char));
	return (1);
}
