#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - Function that prints a struct dog
 * @d: Struct dog
 * Return: NULL
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
