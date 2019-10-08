#include "holberton.h"

/**
 * _strstr - check the code for Holberton School students.
 * @haystack: Array to be searched
 * @needle: Target string
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		j = 0;

		if (haystack[i] == needle[j])
		{
			k = i;

			while (haystack[i + 1] == needle[j + 1])
			{
				i++;
				j++;
			}

		if (needle[j] == '\0')
			return (haystack + k);
		}
	}
	return ('\0');
}
