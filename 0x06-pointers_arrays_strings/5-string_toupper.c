#include "main.h"

/**
 * string_toupper - changes all lower letters to uppercase
 * @str: string input
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
