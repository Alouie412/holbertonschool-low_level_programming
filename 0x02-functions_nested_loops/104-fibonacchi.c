#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  unsigned long a = 1, b = 2, f = 0;
  int i;

  printf("%lu, %lu, ", a, b);
  for (i = 0; i < 95; i++)
    {
      f = a + b;
      if (i % 2 == 0)
	a = f;
      else
	b = f;
      printf("%lu", f);
      if (i != 94)
	printf(", ");
    }
  printf("\n");
  return (0);
}
