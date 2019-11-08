#include "holberton.h"

/**
 * print_binary - Function that converts and prints binary
 * @n: Decimal passed in to be converted
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	mask = mask << (sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		if ((n & mask) != 0)
			_putchar('1');
		else
			_putchar('0');

	mask = mask >> 1;
	}
}
