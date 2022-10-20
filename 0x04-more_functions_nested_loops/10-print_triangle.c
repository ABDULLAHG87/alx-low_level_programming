#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of triangle
 * Return: 0 (Success)
 */

void print_triangle(int size)
{
	int row;
	int col;
	int space;

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
			_putchar(' ');
		}
		for (col = 1; col <= row; col++)
			_putchar('#');
		_putchar('\n');
	}
}
