#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int fib_num;

	printf("%lu, %lu", n1, n2);
	for (i = 0; i < 96; i++)
	{
		fib_num = n1 + n2;
		printf(", %lu", fib_num);
		n1 = n2;
		n2 = fib_num;
	}
	printf("\n");
	return (0);
}
