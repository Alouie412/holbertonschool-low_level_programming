#include "holberton.h"

/**
 * _strstr - check the code for Holberton School students.
 * @haystack: Array to be searched
 * @needle: Target string
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
			if (haystack[j] == needle[i])
				return (needle + i);
	}

	return (0);
}
