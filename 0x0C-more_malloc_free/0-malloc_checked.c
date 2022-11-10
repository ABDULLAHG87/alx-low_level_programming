#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocated memory using malloc
 * @b: integer
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);

	if (alloc == NULL)
	{
		free(alloc);
		exit(98);
	}
	return (alloc);
}
