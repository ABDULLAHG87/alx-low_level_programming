#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string value
 * Return: null
 */

void print_rev(char *s)
{
	int len;
	int i;

	for (len = 0; *s != '\0'; s++)
		len++;
	i = len - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
