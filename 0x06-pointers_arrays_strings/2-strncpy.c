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
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
