#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 98 on incorrect number of arguments or invalid input.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		return (98);
	}

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
