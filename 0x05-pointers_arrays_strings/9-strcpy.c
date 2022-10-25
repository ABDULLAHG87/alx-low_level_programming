#include "main.h"

/**
 * _strcpy - function that copies the string of a source
 * @dest: Destination
 * @src: Source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int index;

	for (len = 0; *src != '\0'; src++)
		len++;
	for (index = 0; index < len; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
