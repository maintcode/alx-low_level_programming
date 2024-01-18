#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: The string to search
 * @needle: The substring to locate
 *
 * Return: The pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle) {
    while (*haystack) {
        char *start = haystack;
        char *needle_start = needle;

        while (*haystack && *needle && (*haystack == *needle)) {
            haystack++;
            needle++;
        }

        if (!*needle) {
            return start;
        }

        haystack = start + 1;
        needle = needle_start;
    }

    return NULL;
}
