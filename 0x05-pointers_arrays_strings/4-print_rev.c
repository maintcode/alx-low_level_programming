#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
	int i, length = 0;

	if (s == NULL)
		return;


	while (s[length] != '\0')
	{
		length++;
	}


	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
