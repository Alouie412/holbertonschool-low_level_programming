#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches the array for matching values depending on the function
 * @array: The array being passed in
 * @size: The number of indexes in the array
 * @cmp: The pointer to a function
 *
 * Return: The index of the first match. -1 if invalid size or no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*ptr)(int);

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	ptr = cmp;
	for (i = 0; i < size; i++)
	{
		if (ptr(array[i]))
			return (i);
	}

	return (-1);
}
