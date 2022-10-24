#include "main.h"
#include <unistd.h>

/**
 * print_rev - function that prints a string in reverse
 * @s: string value
 * Return: null
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
