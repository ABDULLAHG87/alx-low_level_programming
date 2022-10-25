#include "main.h"

/**
 * rev_string - Function that reverses string
 * @s: String
 * Return: null
 */

void rev_string(char *s)
{
	int len;
	int i;
	char temp;

	i = 0;
	for (len = 0; *s != '\0'; s++)
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
