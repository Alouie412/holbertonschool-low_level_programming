#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  int a, b, total = 0;

  for (a = 3; a < 1024;)
    {
      total += a;
      a += 3;
    }

  for (b = 5; b < 1024;)
    {
      total += b;
      b += 5;
    }

  printf("%d\n", total);
  return (0);
}
