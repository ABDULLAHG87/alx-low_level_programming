#include "main.h"

/**
 * rev_string - Function that reverses string
 * @s: String
 * Return: null
 */

void rev_string(char *s)
{
	int len;
	int i, j;
	char temp;

	len = 0;
	while (s[i] != '0')
	{
		i++;
	}
	len = i;
	for (j = 0; j < len / 2; j++)
	{
		temp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = temp;
	}
}
