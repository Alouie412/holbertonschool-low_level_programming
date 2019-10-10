#include "holberton.h"

/**
 * sqrt_loop - Finds natural square root, if it exists
 * @n: Original value
 * @m: Determine if original divided by this has no remainder
 * Return: The natural square root, or -1 if one does not exist
 */
int sqrt_loop(long n, long m)
{
	if (m == 1 || m * m > n)
		return (-1);
	else if ((n / m == m) && (n % m == 0))
		return (n / m);
	else
	  {
		return (sqrt_loop(n, m - 1));
	  }
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
