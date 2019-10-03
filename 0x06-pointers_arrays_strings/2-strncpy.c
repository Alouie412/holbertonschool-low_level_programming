#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i, j;

  i = 0;
  while (src[i] != '\0')
    i++;

  for (j = 0; j < n; j++)
    {
      dest[j] = src[j];
    }

  return (dest);
}
