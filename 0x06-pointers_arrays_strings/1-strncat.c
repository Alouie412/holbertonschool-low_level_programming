#include "holberton.h"

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

  i = 0;
  while (src[i] != '\0')
    i++;

  for (j = 0; j < n && dest[j] != '\0'; j++)
    {
      if (n == 1)
	dest[j + i - 1] = src[j];
      else
	dest[j + i] = src[j];
    }

  return (dest);
}
