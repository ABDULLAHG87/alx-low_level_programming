#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: Integer value to be tested
 * Return: 0 (Success)
 */

int print_last_digit(int n)
{
	int absolute;
	int flag;

	if (n < 0)
	{
		absolute = n * -1;
		_putchar('0' + absolute % 10);
		flag = -1;
	}
	else
	{
		absolute = n * 1;
		_putchar('0' + absolute % 10);
		flag = 1;

	}
	return (flag);
}
