#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: Variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;  /* Declare a variable to hold the arguments. */
	unsigned int i;

	va_start(args, n);  /* Initialize the argument list. */

	for (i = 0; i < n; i++)
	{
		/* Print the current argument. */
		printf("%d", va_arg(args, int));

		/* Print separator if not the last number. */
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");  /* Print a new line at the end. */

	va_end(args);  /* Clean up the argument list. */
}
