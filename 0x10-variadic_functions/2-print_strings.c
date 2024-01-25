#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, separated by a given separator.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: Variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* A list to hold the variable arguments */
	va_list args;
	unsigned int i;
	/* Initialize the va_list to the variable arguments */

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		/* Get the next string argument */
		char *current_str = va_arg(args, char *);

		if (current_str == NULL)
			/* Print (nil) if the string is NULL */
			printf("(nil)");
		else
			/* Print the string */
			printf("%s", current_str);

		if (separator != NULL && i < n - 1)
			/* Print the separator if not the last string */
			printf("%s", separator);
	}

	printf("\n"); /* Print a new line at the end */

	va_end(args); /* Clean up the va_list */
}
