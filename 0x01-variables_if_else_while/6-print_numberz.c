#include <stdio.h>

/**
 * main - Entry Point
 * Task 6: Numberz
 * Return: Always 0 (Success)
 */

int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
