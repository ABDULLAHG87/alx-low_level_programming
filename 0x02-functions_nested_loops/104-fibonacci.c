#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, bool, bool2;
	long int n1, n2, fib_num, fib_num2, n11, n22;

	n1 = 1;
	n2 = 2;
	bool =  bool2 = 1;
	printf("%ld, %ld", n1, n2);
	for (i = 0; i < 96; i++)
	{
		if (bool)
		{
			fib_num = n1 + n2;
			printf(", %ld", fib_num);
			n1 = n2;
			n2 = fib_num;
		}
		else
		{
			if (bool2)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				bool2 = 0;
			}
			fib_num2 = (n11 + n22);
			fib_num = n1 + n2 + (fib_num2 / 1000000000);
			printf(", %ld", fib_num);
			printf("%ld", fib_num2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = fib_num;
			n22 = (fib_num2 % 1000000000);
		}
		if (((n1 + n2) < 0) && bool == 1)
			bool = 0;
	}
	printf("\n");
	return (0);
}
