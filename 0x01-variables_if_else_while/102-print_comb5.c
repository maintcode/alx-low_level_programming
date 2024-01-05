#include <stdio.h>

/**
 * main - Entry point of program
 * Description: Prints all possible combination of two characters
 * Return: Always 0 (success)
 */

int main(void)
{
	int tens1, ones1;

	for (tens1 = 0; tens1 < 99; tens1++)
	{
		for (ones1 = tens1; ones1 < 99; ones1++)
		{
			putchar((tens1 / 10) + '0');
			putchar((tens1 % 10) + '0');
			putchar(' ');
			putchar((ones1 / 10) + '0');
			putchar((ones1 % 10) + '0');

			if (tens1 != 98 || ones1 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
