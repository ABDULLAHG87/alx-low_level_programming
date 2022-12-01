#include "main.h"

/**
 * _strlen - Function that converts Binary to Decimal
 * @b: Binary String
 * Return: len
 */

unsigned int _strlen(const char *b)
{
	int len = 0;
	int index = 0;

	while (b[index])
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * binary_to_uint - Function that converts Binary to Decimal
 * @b: Binary String
 * Return: decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int dec_val = 1;
	unsigned int blen = 0;
	int index;

	if (b == NULL)
	{
		return (0);
	}

	blen = _strlen(b);
	for (index = (blen - 1); index >= 0; index--)
	{
		if (b[index] == '1')
		{
			sum += dec_val;
		}
		else if (b[index] == '0')
		{
			sum = sum;
		}
		else
			return (0);
		dec_val *= 2;
	}
	return (sum);
}
