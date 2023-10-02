#include "main.h"

/**
 * _abs - prints the absolute value of the number
 *
 * @num: gives the integer input to the function
 *
 * Return: always return 0
 */

int _abs(int num)
{
	if (num < 0)
	{
		num = -1 * num;
	}
	return (num);
}
