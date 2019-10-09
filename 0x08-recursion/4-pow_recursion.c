#include "holberton.h"

/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: Original value
 * @y: Power value
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	y--;
	return (x * _pow_recursion(x, y));

}
