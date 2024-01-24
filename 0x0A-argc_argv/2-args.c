#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of argument string
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	print_args(argc, argv);
	return (0);
}


/**
 * print_args - Prints all arguments received
 * @argc: Number of arguments
 * @argv: Array of argument strings
 */

void print_args(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
