#include "main.h"

/**
 * get_bit - Function that returns value of a bit at a given index;
 * @n: Integer Number
 * @index: Index value to be checked
 * Return: Bit status
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int get_status;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	get_status = (n >> index) & 1;

	return (get_status);
}
