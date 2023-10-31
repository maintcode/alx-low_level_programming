#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
    int length = 0;

    // First, calculate the length of the string.
    while (s[length] != '\0')
    {
        length++;
    }

    // Then, print the string in reverse order.
    while (length > 0)
    {
        _putchar(s[length - 1]);
        length--;
    }

    _putchar('\n'); // Finally, print a newline character to end the line.
}
