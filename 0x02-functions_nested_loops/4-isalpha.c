#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else if (c >= 'A' && c <= 'Z')
    return (1);
  else
    return (0);
}
