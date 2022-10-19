#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: 0 (Success)
 */

void times_table(void)
{
	int row;
	int col;
	int result;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');
		for (col = 1; col < 10; col++)
		{
			result = row * col;
			_putchar(',');
			_putchar(' ');
			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + result / 10);
			}
			_putchar('0' + result % 10);
		}
		_putchar('\n');
	}
}
