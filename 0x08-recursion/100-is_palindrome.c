#include "main.h"

int checker(char *s);

/**
 * is_palindrome - validation of palindrome string
 * @s: String
 * Return: 1 if palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return(1);
	return (checker(s));
}

/**
 * _strlen_recursion - Determines lenght of string
 * @s: String
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return(1 + _strlen_recursion(s + 1));
}

/**
 * checker - checks if a string is palindrome
 * @s: String
 * Return: 1 if palindrome or 0 otherwise
 */
int checker(char *s)
{
	int len;
	len = _strlen_recursion(s)  - 1;

	if (*s == s[len])
	{
		s++;
		len--;
	}
	else
	{
		return (0);
	}
	return (1);
}
