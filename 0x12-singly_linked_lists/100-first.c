#include <stdio.h>

/**
 * pre_main_message - Prints a message before the main function is executed
 */
void pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - Entry point of the program
 * Return: Always 0
 */
int main(void)
{
	pre_main_message();


	return (0);
}
