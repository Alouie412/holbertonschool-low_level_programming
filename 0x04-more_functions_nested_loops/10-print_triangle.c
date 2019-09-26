#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: Determines size of triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j > i; j--)
				_putchar(' ');

			for (k = 0; k < i + 1; k++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
