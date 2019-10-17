#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Function that creates an array based on min and max values
 * @min: The lower end of the array
 * @max: The upper end of the array
 * Return: Pointer to the created array
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int index, i;

	if (min > max)
		return (NULL);

	index = (max - min) + 1;

	ptr = malloc(sizeof(int) * index);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
		ptr[i] = i;

	return (ptr);
}
