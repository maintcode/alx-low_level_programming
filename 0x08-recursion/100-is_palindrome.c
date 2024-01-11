#include "main.h"

/**
 * is_palindrome_recursive - Checks if a string is a palindrome
 * @s: The string to be checked
 * @start: the base character
 * @end : Check character end of position
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	/* Base case: If the string is empty or has one */
	/* character, it's a palindrome */
	if (start >= end)
		return (1);

	/* Check if characters at start and end positions are equal */
	if (s[start] != s[end])
		return (0); /* Not a palindrome */

	/* Recursively check the remaining substring */
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Wrapper function for is_palindrome_recursive
 * @s: The string to be checked
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Call the recursive function with start and end indices */
	return (is_palindrome_recursive(s, 0, length - 1));
}
