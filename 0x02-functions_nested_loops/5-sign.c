#include "main.h"

/**
 * print_sign - The magic sign printer
 * @n: The number to check
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is les\
s than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
