#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0
  */

/**
  * print_alphabet_x10 - Prints the alphabet in lowercase 10 time
  */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
