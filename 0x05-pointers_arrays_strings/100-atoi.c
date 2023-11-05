/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value converted from the string.
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;


	for (int i = 0; s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (s[i] == '-')
		{

			sign = -1;
		}

		else if (s[i] == '+')
			}

	sign = 1;
}
else
{
	break;
}

}


return (result * sign);

}
