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
		for (col = 0; col < 10; col++)
		{
			if (col == 0)
			{
				result = row * col;
 			       	_putchar('0' + result);
		       		_putchar(',');
		      		_putchar(' ');
			}
			else if (col >= 0 && col != 9)
			{
				result = row * col;
				if (result <= 9)
				{
					_putchar(' ');
					_putchar('0' + result);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
					_putchar(',');
					_putchar(' ');
				}
			  }
			else
			{
				result = row * col;
				if (result <= 9)
				{
					_putchar(' ');
					_putchar('0' + result);
				}
				else
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
			}
		}
		_putchar('\n');
	}
}
