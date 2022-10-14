#include <stdio.h>

/**
 * main - Entry Point
 * Task 4 - When I was having that alphabet soup
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
