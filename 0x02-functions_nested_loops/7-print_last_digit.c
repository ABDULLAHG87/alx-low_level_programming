#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: Integer value to be tested
 * Return: 0 (Success)
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = -n;
	last = n % 10;
	if (last < 0)
		last = -last;
	_putchar ('0' + last);
	return (last);
}
