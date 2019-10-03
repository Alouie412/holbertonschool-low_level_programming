#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
  int i, j, counter;
  char letter;

  i = counter = 0;
  while (str[i] != '\0')
    i++;

  for (j = 0; j < i; j++)
    {
      if (counter == 0)
	{
	  letter = str[j];
	  if (letter >= 'a' && letter <= 'z')
	    {
	      letter -= 32;
	      str[j] = letter;
	    }
	}
      else
	counter++;

      if (str[j] == '\t')
	str[j] = ' ';

      if ((str[j] >= '(' && str[j] <= ')') || (str[j] >= '!' && str[j] <= '"') || (str[j] >= ',' && str[j] <= '.') || (str[j] >= '{' && str[j] <= '}') || (str[j] == ';') || (str[j] == '?') || (str[j] == ' ') || (str[j] == '\t') || (str[j] == '\n'))
	counter = 0;
      else
	counter ++;

    }

  return (str);
}
