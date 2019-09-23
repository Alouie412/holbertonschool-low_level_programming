#include <stdio.h>
#include "_putchar.c"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char letter = 'H';
  int i;

  for (i = 0; i < 8; i++)
    {
      putchar(letter);

      if (letter == 'H')
	letter = 'o';
      else if (letter == 'o')
	letter = 'l';
      else if (letter == 'l')
	letter = 'b';
      else if (letter == 'b')
	letter = 'e';
      else if (letter == 'e')
	letter = 'r';
      else if (letter == 'r')
	letter = 't';
      else if (letter == 't')
	letter = 'o';
    }

  letter = 'n';
  putchar(letter);
  putchar('\n');
  return (0);
}
