#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 on incorrect argument count, 2 on negative bytes
 */
int main(int argc, char *argv[])
{
	int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Print opcodes of main function */
	for (i = 0; i < bytes; i++)
		printf("%02hhx ", ((char *)main)[i]);

	printf("\n");

	return (0);
}
