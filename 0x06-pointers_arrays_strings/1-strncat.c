#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
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
