/*
 * File: 100-jump.c
 */

#include "search_algos.h"

/**
 * jump_search - Algorithm that searchs for a value in an array
 * Description: This function searches for element and return index found at
 * @array: A pointer to the first element of an array
 * @size: The number of eements in the array
 * @value: The value to search for
 * Return: If the values is found, return the first index, if not
 *         otherwise, if not found return NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t step, jump;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	if (jump < size - 1)
		jump = jump;
	else
		jump = size - 1;

	for (; i < jump && array[i] < value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
