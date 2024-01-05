#include "main.h"

void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n);
		if (n < 98)
			n++;
		else
			n--;
	}
	_putchar('\n');
}
