#include "main.h"

/**
 * factorial - Computes the factorial of a given number
 * @n: The number for which factorial is to be computed
 *
 * Return: Factorial of n, or -1 if n is less than 0 (error)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
