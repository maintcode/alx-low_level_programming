#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes of the second string
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, i, j, len_s2;
	char *concatenated;

	/* Check if s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* Check if s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Find the length of s1 */
	len_s1 = 0;
	while (s1[len_s1] != '\0')
		len_s1++;

	/* Find the length of s2 or use n if it's smaller than s2 length */
	len_s2 = 0;
	while (s2[len_s2] != '\0' && len_s2 < n)
		len_s2++;

	/* Allocate memory for the concatenated string */
	*concatenated = malloc(len_s1 + len_s2 + 1);
	if (concatenated == NULL)
		return NULL;

	/* Copy characters from s1 to concatenated */

	for (i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];

	/* Copy characters from s2 to concatenated, up to n bytes */

	for (j = 0; j < len_s2; j++)
		concatenated[len_s1 + j] = s2[j];

	/* Add null terminator to the end of the concatenated string */
	concatenated[len_s1 + len_s2] = '\0';

	return (concatenated);
}
