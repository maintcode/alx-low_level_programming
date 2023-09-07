#include "main.h"

/**
 * _islower - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success 1, on error -1 and errno set accordingly.
 */
int _islower(char c)
{
	return (write(1, &c, 1));
}
