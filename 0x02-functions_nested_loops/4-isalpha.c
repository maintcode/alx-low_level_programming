#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}
