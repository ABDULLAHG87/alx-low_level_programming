#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 * @a: pointer
 * @n: size of an array
 * Return: null
 */

void print_array(int *a, int n)
{
	int index;

	index = 0;
	if (n == 1)
		printf("%d", a[0]);
	if (index == 0)
		printf("%d", a[index]);
	for (index = 1; index < n; index++)
	{
		printf(", %d", (*(a + index)));
	}
	printf("\n");
}
