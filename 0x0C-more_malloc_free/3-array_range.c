#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
	int size, *arr, i;
	/* Check if min is greater than max */
	if (min > max)
	{
		return (NULL);  /* Return NULL to indicate an error */
	}

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	*arr = malloc(size * sizeof(int));

	/* Check if malloc was successful */
	if (arr == NULL)
	{
		return (NULL);  /* Return NULL if memory allocation fails */
	}

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	/* Return the pointer to the array */
	return (arr);
}
