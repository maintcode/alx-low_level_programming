#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its parameters
 * @n: The number of parameters
 * @...: Variable number of parameters
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{

/* Declare a variable to hold the information needed by va_start and va_arg */
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);  /* If there are no parameters, return 0 */
	/* Initialize the va_list to point to the first argument after n */
	va_start(args, n);

	for (i = 0; i < n; i++)
		/* Access each argument using va_arg and add it to sum */
		sum += va_arg(args, int);
/* Clean up the va_list when done */
	va_end(args);

	return (sum);
}
