#include "main.h"

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of multiplying a and b.
 */

int mul(int a, int b)
{
	int result = 0;

	while (b > 0)
	{
		result += a;
		b--;
	}

	return (result);
}
