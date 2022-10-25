#include "main.h"

/**
 * puts2 - function that prints odd character of a string
 * @str: String Value
 * Return: null;
 */

void puts2(char *str)
{
	int len;

	len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
}
