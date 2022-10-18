#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: Integer value to be tested
 * Return: 0 (Success)
 */

int print_last_digit(int n)
{
	int result;
	int absolute;

	if (n < 0)
	{
		absolute = n * -1;
		result = absolute % 10;
	}
	else
	{
		absolute = n * 1;
		_putchar('0' + absolute % 10);
	}
	return (result);
}
