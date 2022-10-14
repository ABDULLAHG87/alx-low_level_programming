#include <stdio.h>

/**
 * main - Entry Point
 * Task 7: Smile in the mirror
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
