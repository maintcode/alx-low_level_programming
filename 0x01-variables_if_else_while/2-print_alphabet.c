#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabet 'a' to 'z' followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
