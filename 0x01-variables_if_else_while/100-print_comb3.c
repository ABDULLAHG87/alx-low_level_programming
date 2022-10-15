#include <stdio.h>

/**
 * main - Entry Point
 * Task 10: Inventing a Combination of Brains and Materials
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit_one;
	int digit_two;

	for (digit_one = 48; digit_one <= 57; digit_one++)
	{
		for (digit_two = 48; digit_two <= 57; digit_two++)
		{
			if (digit_one < digit_two)
			{
				putchar(digit_one);
				putchar(digit_two);
				if (digit_one != 56 || digit_two != 57)
				{
					putchar(',');
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
