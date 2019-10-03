#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: First string for comparison
 * @s2: Second string for comparison
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i, value;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			value = s1[i] - s2[i];
			i++;
		}
		else
		{
			value = s1[i] - s2[i];
			break;
		}
	}

	return (value);
}
