#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i;

	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicated string (+1 for the null terminator) */
	duplicate = malloc((length + 1) * sizeof(char));

	/* Check if memory allocation was successful */
	if (duplicate == NULL)
		return (NULL);

	/* Copy each character from the original string to the duplicated string */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
