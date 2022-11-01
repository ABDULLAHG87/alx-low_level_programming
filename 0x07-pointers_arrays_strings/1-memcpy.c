#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: destinationation String
 * @src: Source String
 * @n: Size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(dest + index) = *(src + index);
	}
	return (dest);
}
