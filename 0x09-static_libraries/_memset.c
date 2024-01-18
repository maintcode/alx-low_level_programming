#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: The pointer to the memory area
 * @b: The value to be set
 * @n: The number of bytes to be set to the value
 *
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n) {
    char *start = s;

    while (n > 0) {
        *s = b;
        s++;
        n--;
    }

    return start;
}
