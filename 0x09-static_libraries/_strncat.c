#include "main.h"

/**
 * _strncat - concatenates two strings up to n characters
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate
 *
 * Return: The pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n) {
    char *dest_end = dest;

    while (*dest_end) {
        dest_end++;
    }

    while (*src && n > 0) {
        *dest_end++ = *src++;
        n--;
    }

    *dest_end = '\0';
    return dest;
}
