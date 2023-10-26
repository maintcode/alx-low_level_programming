#include <unistd.h>

/**
* main - Entry point of the program
*
*
* Return: Always 1 (success)
*
*/
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 20\
15-10-19\n";

	write(2, message, 59);

	return (1);

}
