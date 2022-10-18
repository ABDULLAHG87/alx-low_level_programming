#include "main.h"

/**
 * print_sign - This function determines the sign of a number
 * @n: Input Value to be tested
 * Return: 0 (Success)
 */

int print_sign(int n)
{
	int flag;

	if (n > 0)
	{
		flag = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		flag = 0;
		_putchar('0');
	}
	else
	{
		flag = -1;
		_putchar('-');
	}
	return (flag);
}
