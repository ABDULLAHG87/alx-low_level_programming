#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @n: Integer
 * @index: Index to be set
 * Return: set bit (1), (-1) if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
	{
		return (-1);
	}

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n = (1 << index) | *n;

	return (1);
}
