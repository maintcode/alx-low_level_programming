#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the hexadecimal numbers from 0 to 9
 *              and the lowercase letters 'a' to 'f' followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');
	return (0);
}
