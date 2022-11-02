#include "main.h"

/**
 * set_string - function that sets the value of a pointer to char
 * @s: pointer of pointer
 * @to: character to change to
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
