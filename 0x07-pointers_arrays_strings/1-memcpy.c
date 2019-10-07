#include "holberton.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: Destination string for copying
 * @src: String to be copied
 * @n: Number of bytes to be copied over
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
