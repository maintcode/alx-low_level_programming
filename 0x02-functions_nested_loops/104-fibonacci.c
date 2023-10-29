#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by commas, followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int a = 1, b = 2, next, i;

	for (i = 1; i <= 98; i++)
	{
		if (i < 98)
			printf("%lu, ", a);
		else
			printf("%lu\n", a);

		next = a + b;
		a = b;
		b = next;
	}

	return (0);
}
