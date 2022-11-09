#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Function that returns a pointer of a newly allocated space
 * @str: string to copy
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	ptr = (char *) malloc(sizeof(char) * strlen(str));

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}

		ptr[i] = '\0';
	}
	return (ptr);
}
