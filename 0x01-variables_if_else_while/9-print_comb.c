#include <stdio.h>

/**
 * main - Entry Point
 * Task 9: Patience, persistence and perspiration
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		if (number < 57)
		{
			putchar(number);
			putchar(',');
			putchar(32);
		}
		else
			putchar(number);
	}
	putchar('\n');
	return (0);
}
