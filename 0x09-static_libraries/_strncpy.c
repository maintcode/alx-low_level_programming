#include "main.h"

/**
 * _strncpy - copies a string up to n characters
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy
 *
 * Return: The pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n) {
    char *dest_start = dest;

    while (*src && n > 0) {
        *dest++ = *src++;
        n--;
    }

    while (n > 0) {
        *dest++ = '\0';
        n--;
    }

    return dest_start;
}
