#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
  int temp;

  temp = *a;

  *a = *b;
  *b = temp;
}
