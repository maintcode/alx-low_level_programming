#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character '\' should be printed
 *
 * Description: This function prints a diagonal line made of '\' characters on
 * the terminal. The length of the diagonal is determined by the value of 'n'.
 * If 'n' is 0 or less, the function only prints a newline character.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
