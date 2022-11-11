#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Function create and array of integers.
 * @min: Minimum number.
 * @max: Maximum number.
 *
 * Return: pointer to the area in memory.
 */
int *array_range(int min, int max)
{
	int *arr;
	int n;

	if (min > max)
		return (NULL);
	n = max - min;

	arr = malloc(sizeof(int) * (n + 1));
	if (!arr)
		return (NULL);
	while (max > min)
	{
		arr[n] = max;
		n--;
		max--;
	}
	arr[n] = min;
	return (arr);
}
