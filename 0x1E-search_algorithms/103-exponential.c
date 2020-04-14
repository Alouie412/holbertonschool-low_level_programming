#include "search_algos.h"

/**
 * mod_binary_search - Function that performs a binary search
 * to find the target value. A modified version of the
 * binary_search function in 1-binary.c
 * @array: The passed in array
 * @value: The target value to beg searched for
 * @begin: The beginning pointer of the array from exponential_search
 * @end: The ending pointer of the array from exponential_search
 * Return: The index of the target value, or -1 if not found
 */
int mod_binary_search(int *array, int value, int begin, int end)
{
	int mid = 0, temp = 0;

	/*
	 * There is no need to check if array is NULL here. This has
	 * already been checked in exponential_search
	 */
	while (begin <= end)
	{
		temp = begin;
		printf("Searching in array: ");
		while (temp <= end)
		{
			printf("%d", array[temp]);
			if (temp != end)
			printf(", ");
			temp++;
		}

		printf("\n");
		mid = (end + begin) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			begin = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Function that performs an exponential
 * search to find the target value
 * @array: The passed in array
 * @size: The size of the given array
 * @value: The target value to be searched for
 * Return: The index of the target value, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int expo = 1, min = 0;

	if (array == NULL)
		return (-1);

	/*
	 * Given how exponential search works, index 0 is never checked
	 * Therefore, this simple if statement checks if the target value
	 * is in fact in index 0
	 */
	if (array[0] == value)
		return (0);

	while (expo < (int)size && array[expo] < value)
	{
		printf("Value checked array[%d] = [%d]\n", expo, array[expo]);
		expo *= 2;
	}

	if (expo + 1 < (int)size)
		min = expo;
	else
		min = (int)size - 1;

	printf("Value found between indexes [%d] and [%d]\n", expo / 2, min);

	return (mod_binary_search(array, value, expo / 2, min));
}
