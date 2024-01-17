/*
 * Project file: 104-advanced_binary.c
 */

#include "search_algos.h"

/**
 * advanced_binary- Function that searches a values in a sorted array
 * @array: A pointer to the first element of the array to search
 * @size: The start index of the sub array
 * @value: The value to be searched for
 * Return: if the value searched for is found return index location else
 *         return NuLL
*/

int advanced_binary(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0, right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

		if (array[i] == value && (i == left || array[i - 1] != value))
		{
			return (i);
		}

		if (array[i] >= value)
			right = i;
		else
			left = i + 1;
	}
	return (-1);
}
