#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len = 0;
	int index;
	int concat_index = 0;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	for (index = 0; s1[index] || s2[index]; index++)
	{
		len++;
	}

	concat = (char *) malloc(sizeof(char) * (len));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (index = 0; s1[index]; index++)
	{
		concat[concat_index++] = s1[index];
	}
	for (index = 0; s2[index]; index++)
	{
		concat[concat_index++] = s2[index];
	}

	return (concat);
}
