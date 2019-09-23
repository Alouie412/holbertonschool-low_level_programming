#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
  int i, j, num;

  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < 10; j++)
	{
	  num = i * j;
	  if (num < 10 && j != 0)
	    {
	      _putchar(' ');
	      _putchar(' ');
	      _putchar(num + '0');
	    }
	  else if(num >= 10)
	    {
	      _putchar(' ');
	      _putchar(num / 10 + '0');
	      _putchar(num % 10 + '0');
	    }
	  else
	    _putchar(num + '0');
	  if (j != 9)
	    _putchar(',');
	}
      _putchar('\n');
    }
}
