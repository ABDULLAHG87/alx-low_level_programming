#include "main.h"

/**
 * _atoi - Convert String to integer
 * @s: string
 * Return: Always (0)
 */

int _atoi(char *s)
{
	int res;
	int i;
	int sign;

	res = 0;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
	if (char
	for (i = 0; s[i] ! = '\0'; ++i)
		res = res * 10 + str[i] - '0';
	return (res)
}
