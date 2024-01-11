#include "main.h"

/**
 * wildcmp - Compares two strings considering wildcard *
 * @s1: First string
 * @s2: Second string with wildcard *
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match or s2 has a wildcard */
	if (*s1 == *s2 || *s2 == '*')
	{
		/* If there is a wildcard, either skip a character in s1 */
		/* or skip '\*' in s2 */
		if (*s2 == '*')
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		/* If current characters match, move to the next characters */
		/* in both strings */
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* If the characters don't match and there is no wildcard,*/
	/* strings are not identical */
	return (0);
}
