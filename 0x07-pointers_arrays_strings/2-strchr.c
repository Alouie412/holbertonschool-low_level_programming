#include "holberton.h"

/**
 * _strchr - check the code for Holberton School students.
 * @s: The array to be searched
 * @c: The character being searched
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
