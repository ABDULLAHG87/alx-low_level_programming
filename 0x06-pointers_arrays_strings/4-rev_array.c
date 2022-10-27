#include "main.h"

/**
 * reverse_array - Function that reverses the contents of an array
 * @a: array
 * @n: number of elements;
 * Return: null;
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
