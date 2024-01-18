#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to search
 * @accept: The characters to include in the prefix
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;

    while (*s && _strchr(accept, *s)) {
        count++;
        s++;
    }

    return count;
}
