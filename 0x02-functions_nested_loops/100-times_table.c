#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: input value
 *Return: 0 (Success)
 */

void print_times_table(int n)
{
	int row;
	int col;
	int result;

	if (n >= 0 && n <= 15 )
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (col = 1; col <= n; col++)
			{
				result = row * col;
				_putchar(',');
				_putchar(' ');
				if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				else if (result <= 99)
				{
					_putchar(' ');
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				else
				{
					_putchar('0' + result / 100);
					_putchar('0' + (result / 10) % 10);
					_putchar('0' + result % 10);
				}
			}
			_putchar('\n');
		}
	}
}
