#include <stdio.h>

int main(void)
{
	int n;
	int arr[5];
	int *ptr;

	arr[2] = 1024;
	ptr = &n;
	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(ptr + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", arr[2]);
	return (0);
}
