#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check n is its positive or negative or Zero
 * Return: 0 in case of success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}