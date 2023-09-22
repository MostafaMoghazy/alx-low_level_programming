#include <stdio.h>
/**
 * main - magic function
 * Return: 0 success
 */
int main(void)
{
	int n;
	int array[5];
	int *ptr;

	array[2] = 1024;
	ptr = &n;
	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use array
	 * - you are not allowed to modify ptr
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(ptr + 5) = 98;
	/* ...so that this prints 98\n */
	printf("array[2] = %d\n", array[2]);
	return (0);
}
