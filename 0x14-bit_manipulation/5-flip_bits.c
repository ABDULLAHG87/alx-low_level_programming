#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

/**
 * flip_bits - function that returns the number of bits to be flipped
 * @n: first Number
 * @m: Seconde Number
 * Return: number of bits (num)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index;
	int count = 0;

	for (index = 0; index < 16; index++)
	{
		if (get_bit(n, index) != get_bit(m, index))
		{
			count++;
		}
	}
	return (count);
}
