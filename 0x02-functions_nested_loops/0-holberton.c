#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char letter[10] = "Holberton\n";
  int i;

  for (i = 0; i < 10; i++)
    {
      putchar(letter[i]);
    }

  return (0);
}
