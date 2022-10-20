#include "main.h"

/**
 * print_line - function that draw a straight line
 * @n: number of lines
 * Return: 0 (Success)
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
