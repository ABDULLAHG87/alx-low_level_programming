#include<unistd.h>
#include "main.h"

/**
 * _islower - Entry Point
 * @c: Value to be tested
 * Return: 0 (Success)
 */

int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
		result = 1;
	else
		result = 0;
	return (result);
}
