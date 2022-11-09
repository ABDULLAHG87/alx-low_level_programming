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

	ptr = (char *) malloc(sizeof(char) * strlen(str));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(ptr, str);
		return (ptr);
	}
	free(ptr);
}
