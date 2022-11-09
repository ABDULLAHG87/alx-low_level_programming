#include"main.h"
#include <stdlib.h>
/**
 * create_array - Function that creats an array of character
 * @size: array Size
 * @c: Character
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
}
