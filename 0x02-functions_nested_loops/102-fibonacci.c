#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	long int n1 = 1;
	long int n2 = 2;
	long int fib_num;

	printf("%ld, %ld", n1, n2);
	for (i = 0; i < 48; i++)
	{
		fib_num = n1 + n2;
		printf(", %ld", fib_num);
		n1 = n2;
		n2 = fib_num;
	}
	printf("\n");
	return (0);
}
