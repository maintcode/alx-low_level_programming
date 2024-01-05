#include "main.h"

/**
 * void print_times_table - prints the times table
 */

void print_times_table(int n)
{
	int row, column, result;

	if (n >= 0 && n <= 14)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				result = row * column;

				if (result > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((result / 100) + '0');
					_putchar((( result / 10) % 10) + '0');
					_putchar(( result % 10) + '0');

				}
				else if (result > 9 )
				{
					_putchar(',');
					_putchar(32);
					_putchar((( result/10) % 10) + '0');
					_putchar(( result % 10) + '0');
				}

				else
				{
					if(column != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(result + '0');
				}
			}
			_putchar ('\n');
		}
	}
}
