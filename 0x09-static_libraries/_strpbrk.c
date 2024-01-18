#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search for
 *
 * Return: The pointer to the first occurrence in s of any of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept) {
    while (*s) {
        if (_strchr(accept, *s)) {
            return s;
        }
        s++;
    }

    return NULL;
}
