#include "main.h"

/**
 * jack_bauer - function that prints every minutes
 * Return: 0 (success)
 */

void jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
		}
	}
}
