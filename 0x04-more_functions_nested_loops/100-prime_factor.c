#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of the program
 * Return: 0 when success
 *
 */
int main(void)
{
	long long number = 612852475143;
	long long largestPrimeFactor = -1;

	while (number % 2 == 0)
	{
		largestPrimeFactor = 2;
		number /= 2;
	}

	for (long long i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largestPrimeFactor = i;
			number /= i;
		}
	}

	if (number > 2)
	{
		largestPrimeFactor = number;
	}

	printf("%lld\n", largestPrimeFactor);

	return (0);
}
