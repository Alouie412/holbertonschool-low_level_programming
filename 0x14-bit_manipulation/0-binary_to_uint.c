#include "holberton.h"

/**
 * binary_to_uint - Function that converts binary to decimal
 * @b: Binary passed in as a char array
 * Return: The converted decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int i, mult = 1, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			count++;
		else
			return (0);
	}

	for (count -= 1; count >= 0; count--, mult *= 2)
	{
		if (b[count] == '1')
			sum += 1 * mult;
	}

	return (sum);
}
