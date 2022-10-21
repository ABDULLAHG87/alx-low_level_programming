#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 (Success)
 */

int main(void)
{
	long int num;
	long int divisor;
	long int max_prime;

	num = 612852475143;
	divisor = 2;
	while (num != 0)
	{
		if (num % divisor != 0)
			divisor = divisor + 1;
		else
		{
			max_prime = num;
			num /= divisor;
			if (num == 1)
			{
				printf("Largest prime factor: %ld\n", max_prime);
				break;
			}
		}
	}
	return (0);
}
