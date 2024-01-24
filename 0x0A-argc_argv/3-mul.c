#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * mul - multiplies two numbers
 * @a: First entry
 * @b: Second entry
 *
 * Return: Result of multiplication
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if the number of arguments is not 3 (program name + 2 numbers) */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert command-line arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Multiply the numbers */
	result = mul(num1, num2);

	/* Print the result */
	printf("%d\n", result);

	return (0);
}
