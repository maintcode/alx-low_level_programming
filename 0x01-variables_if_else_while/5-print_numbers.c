#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the digits from 0 to 9 followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
