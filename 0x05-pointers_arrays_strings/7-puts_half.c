#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (int i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		int start = (length - 1) / 2;

		for (int i = start; str[i] != '\0'; i++)
		{

			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
