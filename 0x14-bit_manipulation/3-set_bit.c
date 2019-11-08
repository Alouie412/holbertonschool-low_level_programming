#include "holberton.h"

/**
 * set_bit - Function that sets a bit to 1 at a specific index
 * @n: Pointer to decimal being passed in
 * @index: The binary position to modify
 * Return: 1 if success, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = mask << index;

	*n = *n | mask;

	return (1);
}
