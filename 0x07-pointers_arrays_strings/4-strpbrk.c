#include "holberton.h"

/**
 * _strpbrk - check the code for Holberton School students.
 * @s: The array to be searched
 * @accept: Target bytes from searching
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
				return (s + i);
	}

	return (0);
}
