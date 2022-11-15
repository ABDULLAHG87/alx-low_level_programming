#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structures for dog
 * @name: Name of Dog
 * @age: Age of Dog
 * @owner: Owner of Dog
 *
 * Description: This structure encapsulate all chacteristics of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
