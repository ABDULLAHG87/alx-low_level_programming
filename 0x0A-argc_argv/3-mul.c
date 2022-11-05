#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 * @argc: Argument count
 * @argv: Argument Vector
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if ((argc -1) == 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
