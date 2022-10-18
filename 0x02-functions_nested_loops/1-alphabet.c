#include<unistd.h>
#include "main.h"

/**
 * print_alphabet - This function prints alphabet in lowercase
 * Task 1_
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
