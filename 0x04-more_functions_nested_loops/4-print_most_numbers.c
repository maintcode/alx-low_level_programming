#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4
 */

void print_most_numbers(void)
{
	char number = '0';

	while (number <= '9')
	{
		if (number != '2' && number != '4')
		{
			_putchar(number);
		}
		number++;
	}

	_putchar('\n');
}
