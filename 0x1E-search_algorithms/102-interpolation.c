#include "search_algos.h"

/**
 * interpolation_search - Function that performs an interpolation
 * search to find the target value
 * @array: The passed in array
 * @size: The size of the given array
 * @value: The target value to be searched for
 * Return: The index of the target value, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int begin = 0;
	unsigned int end = size - 1;
	size_t pos = 0;

	if (array == NULL)
		return (-1);

	while ((array[begin] != array[end]) && (value <= array[end]) &&
		(value >= array[begin]))
	{
		pos = begin + (((double)(end - begin) / (array[end] - array[begin]))
			* (value - array[begin]));
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			end = pos - 1;
		else
			begin = pos + 1;
	}

	if (array[begin] == value)
		return (begin);

	/* For if the index to search for is out of range */
	pos = begin + (((double)(end - begin) / (array[end] - array[begin]))
		* (value - array[begin]));
	printf("Value checked array[%d] is out of range\n", (int)pos);
	return (-1);
}
