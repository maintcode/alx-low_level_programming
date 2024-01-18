#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @s: The string to print
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
