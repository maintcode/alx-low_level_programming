#include "main.h"

/**
 * void print_times_table - prints the times table
 */

void print_times_table(int n)
{
	int row, column, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;

			if (column == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}

				if (result < 100)
				{
					_putchar(' ');
				}
			}

			if (result >= 100)
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
			}
			else if (result >= 10)
	       	{
       			_putchar(' ');
			_putchar((result / 10) + '0');
	       	}

       		_putchar((result % 10) + '0');

       		if (column == n)
       		{
			_putchar('\n');
		}
		}
	}
}
