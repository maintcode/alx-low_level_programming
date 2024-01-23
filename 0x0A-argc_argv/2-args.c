#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	/* Ensure there is at least one command line argument */
	if (argc > 0)
	{
		/* Print the program name using _putchar */
		while (*argv[0] != '\0')
		{
			_putchar(*argv[0]);
			argv[0]++;
		}

		/* Print a new line at the end */
		_putchar('\n');

		return (0); /* Return success */
	}

	return (1); /* Return error if no command line arguments */
}
