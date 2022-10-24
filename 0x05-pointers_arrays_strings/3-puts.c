#include "main.h"
#include <unistd.h>

/**
 * _puts - function that prints a string
 * @str: string value
 * Return: null
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
