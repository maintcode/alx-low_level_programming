#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the English alphabet in reverse order
 *              from 'z' to 'a' followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
