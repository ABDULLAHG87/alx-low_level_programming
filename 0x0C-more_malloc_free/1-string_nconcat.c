#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: string 1
 * @s2: String 2
 * @n: first n byte
 * Return: pointer (str)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int index, len1, len2;
	unsigned int concat_index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] != '\0'; index++)
		len1++;
	for (index = 0; s2[index] != '\0'; index++)
		len2++;
	if (n >= len2)
		n = len2;
	concat = malloc(sizeof(*concat) * (len1 + n) + 1);

	if (concat == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index]; index++)
	{
		concat[concat_index++] = s1[index];
	}
	for (index = 0; index < n; index++)
	{
		concat[concat_index++] = s2[index];
	}
	concat[concat_index] = '\0';
	return (concat);
}
