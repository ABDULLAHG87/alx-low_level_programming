#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: String
 * @c: Character
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			return (s + index);
		}
		index++;
	}
	return ('\0');
}
