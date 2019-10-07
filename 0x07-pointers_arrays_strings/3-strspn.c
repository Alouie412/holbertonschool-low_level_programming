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
  for (i = 0; s[i] != '\0'; i++)
    {
      if (s[i] == '\0')
	break;

      for (j = 0; accept[j] != '\0'; j++)
	{
	  if (s[j] == accept[i])
	    count++;
	}
    }

  return (count);
}
