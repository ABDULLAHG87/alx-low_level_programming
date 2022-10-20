#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int n1 = 1;
	int n2 = 2;
	int fib_num;

	printf("%d, %d", n1, n2);
	for (i = 0; i < 50; i++)
	{
		fib_num = n1 + n2;
		printf(", %d", fib_num);
		n1 = n2;
		n2 = fib_num;
	}
	printf("\n");
	return (0);
}
