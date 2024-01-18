#include "main.h"

/**
 * _strcpy - copies a string to a destination
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to the destination string
 */
char *_strcpy(char *dest, char *src) {
    char *dest_start = dest;
    while ((*dest++ = *src++))
        ;
    return dest_start;
}
