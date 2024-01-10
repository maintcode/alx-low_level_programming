#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)  /* 0 and 1 are not prime numbers */
		return (0);

	return (check_prime(n, 2));
}

/**
 * check_prime - Recursive helper function to check primality
 * @n: The number to be checked
 * @divisor: The current divisor being checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
	if (divisor <= n / 2)
	{
		if (n % divisor == 0) /* If n is divisible by divisor, not prime */
			return (0);
		else
			return (check_prime(n, divisor + 1)); /* Check with next divisor */
	}
	else
	{
		return (1); /* If no divisor found, it's a prime number */
	}
}
