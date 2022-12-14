#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: String Buffer
 * @b: character to replace memory
 * @n: Size of Replacement
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s;
	char value = b;

	for (index = 0; index < n; index++)
	{
		*(memory + index) = value;
	}
	return (memory);
}
