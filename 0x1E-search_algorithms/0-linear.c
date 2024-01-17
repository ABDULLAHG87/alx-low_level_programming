/*
 * File: 0-linear.c
 */

#include "search_algos.h"

/**
 * linear_search - Algorithm that searchs for a value in an array
 * Description: This function searches for element and return index found at
 * @array: A pointer to the first element of an array
 * @size: The number of eements in the array
 * @value: The value to search for
 * Return: If the values is found, return the first index, if not
 *         otherwise, if not found return NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);

}
