#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: A pointer to the newly allocated space in memory containing
 *         the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len1 = 0, len2 = 0, i, j;

	/* Check if s1 is NULL and replace with an empty string */
	if (s1 == NULL)
		s1 = "";

	/* Check if s2 is NULL and replace with an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of both strings */
	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	/* Allocate memory for the concatenated string */
	concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

	/* Check if memory allocation is successful */
	if (concatenated == NULL)
		return (NULL);

	/* Copy characters from s1 to concatenated */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy characters from s2 to concatenated */
	for (j = 0; j < len2; j++, i++)
		concatenated[i] = s2[j];

	/* Null-terminate the concatenated string */
	concatenated[i] = '\0';

	return (concatenated);
}
