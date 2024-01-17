#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string
 * @str: Input string
 * Return: Number of words
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return count;
}

/**
 * strtow - Splits a string into words
 * @str: Input string
 * Return: Array of words or NULL if failed
 */
char **strtow(char *str)
{
	int i, j, k, len, words;
	char **arr;

	if (str == NULL || *str == '\0')
		return NULL;

	words = count_words(str);
	if (words == 0)
		return NULL;

	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return NULL;

	i = 0;
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;

		len = 0;
		while (str[len] && str[len] != ' ' && str[len] != '\t' && str[len] != '\n')
			len++;

		if (len > 0)
		{
			arr[i] = malloc((len + 1) * sizeof(char));
			if (arr[i] == NULL)
			{
				while (i > 0)
					free(arr[--i]);
				free(arr);
				return NULL;
			}

			for (j = 0, k = 0; k < len; j++, k++)
				arr[i][j] = str[k];
			arr[i][j] = '\0';
			i++;
		}

		str += len;
	}

	arr[i] = NULL;
	return arr;
}
