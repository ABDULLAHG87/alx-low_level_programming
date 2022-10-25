#include "main.h"

/**
 * _strcpy - function that copies the string of a source
 * @dest: Destination
 * @src: Source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
