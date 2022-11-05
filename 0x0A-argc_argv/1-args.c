#include <stdio.h>

/**
 * main - Entry Point
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: 0 Always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
