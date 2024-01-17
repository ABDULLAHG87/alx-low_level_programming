/*
 * Project file: 104-advanced_binary.c
 */

#include "search_algos.h"

/**
 * advanced_binary_recursive- Function that searches a values in a sorted array
 * @array: A pointer to the first element of the array to search
 * @left: The start index of the sub array
 * @right: The end index of the sub array
 * @value: The value to be searched for
 * Return: if the value searched for is found return index location else
 *         return NuLL
*/

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

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
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary- Function that searches a values in a sorted array
 * @array: A pointer to the first element of the array to search
 * @size: size of the array
 * @value: The value to be searched for
 * Return: if the value searched for is found return index location else
 *         return NuLL
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
