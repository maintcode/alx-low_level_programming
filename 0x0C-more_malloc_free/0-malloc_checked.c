#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         or terminate the program if allocation fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Try to allocate memory using malloc */
	ptr = malloc(b);

	/* Check if allocation was successful */
	if (ptr == NULL)
	{
		/* If malloc fails, terminate the program with status 98 */
		exit(98);
	}

	return (ptr);
}
