#include<stdio.h>
#include <ctype.h>
#include<stdlib.h>
/**
 * main - Entry Point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int count = 1;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
