#include "holberton.h"

/**
 * get_bit - Function that returns the bit at a specified location
 * @n: The decimal number being passed in
 * @index: The binary position to check
 * Return: The value at a particular index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = mask << index;

	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
