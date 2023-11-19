#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long n)
{
	long factor = 2;

	while (n > 1)
	{
		if (n % factor == 0)
			n /= factor;
		else
			factor++;
	}

	return (factor);
}

/**
 * main - Entry point of the program
 * @void: Empty
 * Return: 0 if Success
 */

int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);

	return (0);
}
