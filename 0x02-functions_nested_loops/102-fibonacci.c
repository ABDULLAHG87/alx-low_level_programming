#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 (Success)
 */

int main(void)
{
	int n1 = 0;
	int n2 = 1;
	int next_term = 0;

	next_term = n1 + n2;
	printf("%d, %d, ", n1, n2);
	while (next_term <= 50)
	{
		printf("%d, ", next_term);
		n1 = n2;
		n2 = next_term;
		next_term = n1 + n2;
	}
	putchar('\n');
	return (0);
}
