#include "holberton.h"

/**
 * variableHolder - Holds a variable to get around recursion issue
 * @num: Holds a number
 *
 * Return: The number minus 1
 */
int variableHolder(int num)
{
	num--;

	return (num);
}

/**
 * sqrt_loop - Loops through itself to determine if a natural square root exists
 * @n: Original value
 * @m: Determine if original divided by this has no remainder
 * Return: The natural square root, or -1 if one does not exist
 */
int sqrt_loop(int n, int m)
{
	if (m == 1)
		return (-1);
	else if (n / (variableHolder(m)) == (variableHolder(m)) && (n % (variableHolder(m)) == 0))
		return (n / (variableHolder(m)));
	else
		return sqrt_loop(n, (variableHolder(m)));
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
	else
		return sqrt_loop(n, n);

	return 0;
}
