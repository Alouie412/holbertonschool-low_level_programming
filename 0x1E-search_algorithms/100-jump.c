#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function that performs a jump search
 * to find the target value
 * @array: The passed in array
 * @size: The size of the given array
 * @value: The target value to be searched for
 * Return: The index of the target value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int position = 0, jump = sqrt((int)size);
	int temp = 0;

	if (array == NULL)
		return (-1);

	while (position < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", position, array[position]);
		if (array[position + jump - 1] >= value || position + jump >= (int)size)
			break;

		position += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", position,
		position + jump);

	temp = position;
	while (position < temp + jump && position < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);

		position++;
	}

	return (-1);
}
