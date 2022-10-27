#include "main.h"

/**
 * leet - function that Encodes strings
 * @str: String Input
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int count;
	char lower[5] = {'a', 'e', 'o', 't', 'l'};
	char upper[5] = {'A', 'E', 'O', 'T', 'L'};
	char number[5] = {'4', '3', '0', '7', '1'};

	count = 0;
	while (str[count] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((str[count] == lower[i]) || (str[count] == upper[i]))
			{
				str[count] = number[i];
				break;
			}
		}
		count++;
	}
	return (str);
}
