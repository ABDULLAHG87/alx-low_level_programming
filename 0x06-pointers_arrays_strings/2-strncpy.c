#include "main.h"

/**
 * _strncpy - String copy a given number of character to a string
 * @dest: Destination String
 * @src: Source String
 * @n: number of character
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
