#include "main.h"

/**
 * print_square - Prints a square of '#' characters.
 * @size: The size of the square.
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');

	}


	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
