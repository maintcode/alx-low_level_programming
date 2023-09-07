#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet from 'a' to 'z'
 *              excluding 'e' and 'q', followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}

	putchar('\n');

	return (0);
}
