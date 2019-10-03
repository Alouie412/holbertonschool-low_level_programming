#include "holberton.h"

/**
 * _strcat - check the code for Holberton School students.
 * @dest: Destination string
 * @src: String for adding
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;

	if (i == 0)
		return;

	for (j = 0; j <= i; j++)
		dest[j + i - 1] = src[j];

	return (dest);
}
