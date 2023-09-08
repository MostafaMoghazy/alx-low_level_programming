#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A c Program which determine the status of last digit of RNUM
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5", n, l);
	else if (l < 6)
	{
		if (l == 0)
			printf("Last digit of %d is %d and is 0", n, l);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
	}
	return (0);
}
