#include "main.h"

/**
 * _isdigit - the function checks for a digit;
 * @c: input value
 * Return: 1 Success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
