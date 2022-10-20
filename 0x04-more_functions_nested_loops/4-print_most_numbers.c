#include "main.h"

/**
 * print_most_numbers - function that prints the numbers 0 - 9
 * Return: 0 (Success)
 */

void print_most_numbers(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		if (digit == 2 || digit == 4)
			continue;
		_putchar('0' + digit);
	}
	_putchar('\n');
}
