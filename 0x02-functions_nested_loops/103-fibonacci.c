#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	long int n1 = 0;
	long int n2 = 1;
	long int fib_num;
	long int sum = 0;

	for (i = 0; i < 50; i++)
	{
		fib_num = n1 + n2;
		n1 = n2;
		n2 = fib_num;
		if (fib_num < 4000000)
		{
			if (fib_num % 2 == 0)
				sum += fib_num;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
