#include "main.h"

int check_prime(int n, int index);
/**
 * is_prime_number - detects Prime Number
 * @n: number
 * Return: prime flag
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Validate prime numbers
 * @n: number;
 * @index: iterator
 * Return: 1 for Prime or 0 otherwise
 */

int check_prime(int n, int index)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	if (n % index == 0 && index > 1)
	{
		return (0);
	}
	if ((n / index) < index)
	{
		return (1);
	}
	return (check_prime(n, index + 1));
}
