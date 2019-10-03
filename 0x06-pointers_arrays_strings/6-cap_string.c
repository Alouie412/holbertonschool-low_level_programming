#include "holberton.h"

/**
 * cap_string - check the code for Holberton School students.
 * @str: String for capitalization modification
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i, j, counter;
	char letter;

	i = counter = j = 0;
	while (str[i] != '\0')
		i++;

	if (str[j] == '\t')
		str[j] = ' ';

	else if (str[j] >= '!' && str[j] <= '"')
		counter = 0;
	else if (str[j] >= ',' && str[j] <= '.')
		counter = 0;
	else if (str[j] >= '{' && str[j] <= '}')
		counter = 0;
	else if (str[j] == ';' || str[j] == '?' || str[j] == '\n' || str[j] == ' ')
		counter = 0;
	else if (str[j] == '(' && str[j] == ')')
		counter = 0;
	else
		counter++;

	for (j = 0; j < i; j++)
	{
		if (counter = 0)
		{
			letter = str[j];
			if (letter >= 'a' && letter <= 'z')
				letter -= 32;

			str[j] = letter;
		}
	}

	return (str);
}
