#include "holberton.h"

/**
 * varHolder - Holds a variable to get around recursion issue
 * @num: Holds a number
 *
 * Return: The number minus 1
 */
int varHolder(int num)
{
	num--;

	return (num);
}

/**
 * sqrt_loop - Finds natural square root, if it exists
 * @n: Original value
 * @m: Determine if original divided by this has no remainder
 * Return: The natural square root, or -1 if one does not exist
 */
int sqrt_loop(int n, int m)
{
	if (m == 1)
		return (-1);
	else if (n / (varHolder(m)) == (varHolder(m)) && (n % (varHolder(m)) == 0))
		return (n / (varHolder(m)));
	else
		return (sqrt_loop(n, (varHolder(m))));
}

/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: Original value
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	else if (n < 0)
		return (-1);

	return (sqrt_loop(n, n));
}
