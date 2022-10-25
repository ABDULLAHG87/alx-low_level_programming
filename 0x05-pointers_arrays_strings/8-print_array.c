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
	for (index = 0; index < n; index++)
	{
		if (index == 0)
			printf("%d", a[index]);
		else
			printf(", %d", (*(a + index)));
	}
	printf("\n");
}
