#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1 to 100, replacing multi\
ples of 3 with "Fizz,"
 * multiples of 5 with "Buzz," and multiples of both with "FizzBuzz."
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			print_fizzbuzz();
		else if (i % 3 == 0)
			print_fizz();
		else if (i % 5 == 0)
			print_buzz();
		else
			print_number(i);

		if (i < 100)
			print_space();
		else
			print_newline();
	}

	return (0);
}
