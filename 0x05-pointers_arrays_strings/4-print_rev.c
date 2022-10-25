#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string value
 * Return: null
 */

void print_rev(char *s)
{
	long int len;
	long int i;

	for (len = 0; *s != '\0'; s++)
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
