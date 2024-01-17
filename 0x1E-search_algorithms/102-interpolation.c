/*
 * File: 102-interpolation.c
 */

#include "search_algos.h"

/**
 * interpolation_search - Algorithm that searchs for a value in an array
 * Description: This function searches for element and return index found at
 * @array: A pointer to the first element of an array
 * @size: The number of eements in the array
 * @value: The value to search for
 * Return: If the values is found, return the first index, if not
 *         otherwise, if not found return NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i;
	size_t low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		i = low + (((double)(high - low) / (array[high] - array[low])) *
		    (value - array[low]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
