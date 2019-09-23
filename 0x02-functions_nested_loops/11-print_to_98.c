#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
  if (n == 98)
    {
      printf("%d\n", n);
    }
  else if(n < 98)
    {
      for(; n <= 98; n++)
	{
	  printf("%d", n);
	  if (n != 98)
	    printf(", ");
	  else
	    printf("\n");
	}
    }
  else if (n > 98)
    {
      for(; n >= 98; n--)
	{
	  printf("%d", n);
	  if (n != 98)
	    printf(", ");
	  else
	    printf("\n");
	}
    }
}
