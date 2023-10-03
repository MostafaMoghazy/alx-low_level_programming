#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int itr;

	for (itr = 0; itr < argc; itr++)
	{
		printf("%s\n", argv[itr]);
	}

	return (0);
}
