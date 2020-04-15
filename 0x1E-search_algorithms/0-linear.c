#include "search_algos.h"

/**
 * linear_search - Function that performs a linear search
 * to find the target value
 * @array: The passed in array
 * @size: The size of the given array
 * @value: The target value to be searched for
 * Return: The index of the target value, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int position = 0;

	if (array == NULL)
		return (-1);

	/*
	 * Size is typecasted into an int, because negative numbers
	 * are allowed in the array and we need to compare our position
	 * in the array to the size of the array. Otherwise negative numbers
	 * end up giving us an incorrect number
	 */
	while (position < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);

		position++;
	}
	return (-1);
}
