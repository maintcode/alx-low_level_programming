#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program calculates and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded).
 *
 * Return: 0 for success
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
