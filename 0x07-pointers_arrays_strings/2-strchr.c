#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: String
 * @c: Character
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
