#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program finds and prints the sum of even-valued terms
 * in the Fibonacci sequence that do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int first = 1;
	long int second = 2;
	long int next;
	long int sum = 2;

	while (1)
	{
		next = first + second;
		if (next > 4000000)
		{
			break;
		}

		if (next % 2 == 0)
		{
			sum += next;
		}

		first = second;
		second = next;
	}

	printf("%ld\n", sum);

	return (0);
}
