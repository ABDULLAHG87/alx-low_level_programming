#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int row;
	unsigned int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
