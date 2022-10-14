#include <stdio.h>

/**
 * main - Entry Point
 * Task 8: Hexadecimal
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;
	int alpha;

	for (number = 48; number <= 57; number++)
		putchar(number);
	for (alpha = 'a'; alpha < 'g'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
