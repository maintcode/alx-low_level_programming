#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generate a random number and determine if it's greater than 5,
 * equal to 0, less than 6, then print the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("The number %d is ", n);

	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("and is 0 \n");
	}
	else
	{
		printf("and is less than 6 and not 0 \n");
	}

	return (0);
}
