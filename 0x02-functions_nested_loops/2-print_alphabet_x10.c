#include<unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int alpha;
	int no_times;

	for (no_times = 0; no_times < 10; no_times++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
