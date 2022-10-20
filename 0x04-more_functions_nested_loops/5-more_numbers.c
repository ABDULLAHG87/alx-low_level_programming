#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	int num_times;
	int digit;

	for (num_times = 0; num_times < 10; num_times++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit > 9)
			{
				_putchar('0' + digit / 10);
			}
			_putchar('0' + digit % 10);
		}
		_putchar('\n');
	}
}
