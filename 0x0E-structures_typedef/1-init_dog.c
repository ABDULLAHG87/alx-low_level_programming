#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct
 * @d: Pointer of a structure
 * @name: name of Dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
