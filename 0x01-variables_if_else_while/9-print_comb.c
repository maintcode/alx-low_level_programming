#include <stdio.h>

/**
 * main - Entry Point of the program
 *
 * Description: Prints all combinations of number
 *
 * Return: Always 0 if success
 *
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');

		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
