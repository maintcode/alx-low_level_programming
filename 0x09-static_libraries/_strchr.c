#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to locate
 *
 * Return: The pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c) {
            return s;
        }
        s++;
    }

    if (c == '\0') {
        return s;
    }

    return NULL;
}
