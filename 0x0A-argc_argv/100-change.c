#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, min_coins;

	if (check_args(argc, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	min_coins = get_change(cents);

	printf("%d\n", min_coins);

	return (0);
}

/**
 * get_change - Calculates the minimum number of coins needed for change
 * @cents: Amount of money in cents
 *
 * Return: Minimum number of coins
 */
int get_change(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int min_coins = 0;
	int i;

	for (i = 0; i < num_coins; i++)
	{
		min_coins += cents / coins[i];
		cents %= coins[i];
	}

	return (min_coins);
}

/**
 * check_args - Checks the number of command-line arguments
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if the number of arguments is valid, 1 otherwise
 */
int check_args(int argc, char *argv[])
{
	if (argc != 2 || atoi(argv[1]) < 0)
		return (1);
	return (0);
}
