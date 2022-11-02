#include "main.h"
#include <stdio.h>
/**
 * print_diagsums- prints the sume of the two diagonal of a square
 * @a: array of integer
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_d1 = 0;
	int sum_d2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_d1 += *(a + (size * i) + i);
		sum_d2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", sum_d1, sum_d2);
}
