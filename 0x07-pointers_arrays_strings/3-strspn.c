#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int i, j, count;

  count = 0;
  for (i = 0; accept[i] != '\0'; i++)
    {
      for (j = 0; accept[j]; j++)
	{
	if (accept[j] == s[i])
	  {
	  count++;
	  printf("Count increased.\n");
	  }
	else
	  printf("Count not increased.\n");
	}
      printf("Current counter: %d\n", count);
    }

  return (count);
}
