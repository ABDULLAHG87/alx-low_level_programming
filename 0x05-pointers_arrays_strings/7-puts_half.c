#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string value
 * Return: null
 */

void puts_half(char *str)
{
	int len;
	int i;
	int n;


	for (len = 0; *str != '\0'; str++)
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
