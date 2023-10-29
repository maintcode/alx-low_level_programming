#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints natural numbers starting from n up to 98.
 * Numbers are separated by a comma and space, and each line ends with a\
 newline.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}

	printf("98\n");
}
