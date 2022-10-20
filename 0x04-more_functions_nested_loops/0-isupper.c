#include "main.h"

/**
 * _isupper - This function determines if a character is upper case
 * @c: input character to be tested
 * Return: 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
