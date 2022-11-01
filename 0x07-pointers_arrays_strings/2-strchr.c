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

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return ('\0');
}
