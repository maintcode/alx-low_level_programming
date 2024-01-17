#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char  *str;

	if (ac == 0 || av == NULL)
		return (NULL);


	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* Add space for '\n' after each argument */
	}

	/* Allocate memory for the concatenated string */
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Copy each argument into the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n'; /* Add '\n' after each argument */
		k++;
	}

	str[k] = '\0'; /* Null-terminate the concatenated string */
	return (str);
}
