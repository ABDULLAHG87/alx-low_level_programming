#include "main.h"

/**
 * _strlen_recursion - Function the returns length of a string
 * @s: Input String
 * Return: length of String
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
