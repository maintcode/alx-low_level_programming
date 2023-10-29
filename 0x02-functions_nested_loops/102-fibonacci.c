#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)

{
	long int a = 1;
	long int b = 2;
	long int next;

	int i;

	for (i = 1; i <= 50; i++)
	{
		if (i < 50)
		{
			printf("%ld, ", a);
		}
		else
		{
			printf("%ld\n", a);
		}

		next = a + b;
		a = b;
		b = next;
	}

	return (0);
}
