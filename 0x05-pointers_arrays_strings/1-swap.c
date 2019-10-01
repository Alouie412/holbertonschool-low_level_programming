#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: First variable to be swapped
 * @b: Second variable to be swapped
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
