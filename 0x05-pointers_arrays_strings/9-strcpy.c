#include "main.h"

/**
 * _strcpy - Copies each character from srcto dest
 * @dest - Adds null pointer to end
 * @src - number of elements to print
 * Return - pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return dest;
}
