#include<stdio.h>

/**
 * main - Entry Poing
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
