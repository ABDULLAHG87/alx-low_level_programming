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

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = (char *) malloc(sizeof(char) * (strlen(str) + 1));

	if (ptr == NULL)
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
