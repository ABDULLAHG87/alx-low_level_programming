#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * @n: integer
 * Result: 0 (Success)
 */

void print_to_98(int n)
{
	int i;

	if(n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');

	}

}
