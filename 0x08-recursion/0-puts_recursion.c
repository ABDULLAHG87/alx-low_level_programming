#include "main.h"

/**
 * _puts_recursion - Function that prints a String
 * @s: String
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
