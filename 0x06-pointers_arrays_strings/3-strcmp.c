#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * Return: 0 if s1 and s2 are identical, a positive value if s1 is greater,
 * or a negative value if s2 is greater.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}

		i++;
	}

	return (s1[i] - s2[i]);
}
