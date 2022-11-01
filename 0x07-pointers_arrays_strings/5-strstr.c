#include "main.h"

/**
 * _strstr - The function that locates a substring
 * @haystack: Main String
 * @needle: substring
 * Return: string value
 */

char *_strstr(char *haystack, char *needle)
{
	char *string = haystack;
	char *substring = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (string);
		}
		needle = substring;
		string++;
		haystack = string;
	}
	return (0);
}
