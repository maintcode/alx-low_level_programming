#include <ctype.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: The function pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}


/**
 * print_uppercase - Prints a name in uppercase
 * @name: The name to be printed
 */
void print_uppercase(char *name)
{
	while (*name)
	{
		putchar(toupper(*name));
		name++;
	}
	putchar('\n');
}

/**
 * print_lowercase - Prints a name in lowercase
 * @name: The name to be printed
 */
void print_lowercase(char *name)
{
	while (*name)
	{
		putchar(tolower(*name));
		name++;
	}
	putchar('\n');
}
