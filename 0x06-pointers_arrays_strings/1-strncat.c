#include "main.h"

/**
 * _strncat - Concatenate Certain number of strings
 * @dest: Destination String
 * @src: Source String
 * @n: number of character in the strings to be append
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
