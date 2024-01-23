#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{

	(void)argv; /* Unused parameter */

	if (argc < 0)
		return (1);

	printf("%d\n", argc - 1);

	return (0);
}
