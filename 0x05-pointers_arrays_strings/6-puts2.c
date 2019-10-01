#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: String for alternate printing
 * Return: Always 0.
 */
void puts2(char *str)
{
  int i, j;

  i = 0;
  while (str[i] != '\0')
    i++;

  i--;
  _putchar(str[0]);

  for (j = 1; j <= i; j++)
    {
      if (j % 2 == 0)
	_putchar(str[j]);
    }

  _putchar('\n');
}
