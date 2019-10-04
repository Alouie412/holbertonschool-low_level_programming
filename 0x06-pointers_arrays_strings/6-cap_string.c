#include "holberton.h"

/**
 * cap_string - check the code for Holberton School students.
 * @str: String for capitalization modification
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i, j, counter;

	i = counter = 0;

	while (str[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (counter == 0)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
			else
				counter++;
		}

		if (str[j] == '!' || str[j] == '"' || str[j] == '(' || str[j] == ')')
			counter = 0;
		else if (str[j] == ',' || str[j] == '.' || str[j] == '{' || str[j] == '}')
			counter = 0;
		else if (str[j] == ';' || str[j] == '?' || str[j] == '\n')
			counter = 0;
		else if (str[j] == '\t')
			counter = 0;
		else if (str[j] == ' ')
			counter = 0;
		else
			counter++;
	}

	return (str);
}
