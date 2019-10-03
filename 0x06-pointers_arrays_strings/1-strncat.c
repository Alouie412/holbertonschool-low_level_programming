#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - check the code for Holberton School students.
 * @dest: Destination string
 * @src: String to be added
 * @n: Array block
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
