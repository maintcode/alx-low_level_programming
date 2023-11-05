#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}


	int start = 0;
	int end = length - 1;


	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		_printf('\n');
		s[end] = temp;
		start++;
		end--;
	}
}
