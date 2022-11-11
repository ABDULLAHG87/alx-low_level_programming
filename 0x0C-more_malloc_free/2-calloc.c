#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int ar_size, n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar_size = nmemb * size;
	ar = malloc(ar_size);
	if (ar == NULL)
		return (NULL);
	while (n < ar_size)
	{
		ar[n] = 0;
		n++;
	}
	return (ar);
}
