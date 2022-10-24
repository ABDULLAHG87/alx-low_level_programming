#include "main.h"
#include <unistd.h>

/**
 * put_rev - function that prints a string in reverse
 * @str: string value
 * Return: null
 */

void print_rev(char *s)
{
	int len;
	char *rev;
	int i;

	len = 0;
	rev = "";
	while(*s != '\0')
	{
		s++;
		len++;
	}
	for (i = len - 1; i<=0; i--)
	{
		rev = rev + *(s + i);
	}
	rev = rev + '\0';
	while (*rev != '\0')
	{
		_putchar(*rev);
		rev++;
	}
	_putchar('\n');
}
