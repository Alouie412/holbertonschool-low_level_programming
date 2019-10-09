#include "holberton.h"

/**
 * variableHolder - Holds a value to avoid recursion
 * @num: Holds a value
 * Return: The value minus 1
 */
int variableHolder(int num)
{
	num--;

	return (num);
}

/**
 * increment - Loops through itself to determine if the value is a prime number
 * @i: Original value
 * @j: Original value, divided by 2 and rounded down for comparison
 * Return: 1 if prime number, 0 if not
 */
int increment(int i, int j)
{
	if (variableHolder(j) == 1)
		return (1);
	else if (i % variableHolder(j) == 0)
		return (0);
	else
		return (increment(i, j - 1));
}
/**
 * is_prime_number - check the code for Holberton School students.
 * @n: Original value
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n == -1 || n % 2 == 0)
		return (0);
	else
		return ((increment(n, n / 2)));
}
