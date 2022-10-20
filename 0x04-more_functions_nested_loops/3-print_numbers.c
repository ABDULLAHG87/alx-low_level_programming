#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		_putchar('0' + digit);
	_putchar('\n');
}
