#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generatePassword - Generate a random password
 * @length: The length of the password to genetate
 *
 * Return: A pointer to the generated password (must be freed by the caller)
 */

char* generatePassword(int length)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char* password = (char*)malloc((length + 1) * sizeof(char));

	if (password)
	{
		for (int i = 0; i < length; i++)
		{
			int index = rand() % (sizeof(charset) - 1);
			password[i] = charset[index];
		}
		password[length] = '\0';
	}

	return password;
}

int main()
{

	srand((unsigned int)time(NULL));

	int passwordLength = 12;
	char* password = generatePassword(passwordLength);

	if (password)
	{
		printf("Generated Password: %s\n", password);
		free(password);
	}

	return 0;
}
