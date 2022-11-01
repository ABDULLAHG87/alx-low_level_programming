#include "main.h"

/**
 * _strpbrk - This function searches a string of any set of bytes
 * @s: String to be searched
 * @accept: string to be searched
 * Return: a pointer byte
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
