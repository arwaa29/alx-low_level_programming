#include "dog.h"

/**
 * init_dog - it is a function initializes a dog
 *
 * @d: the dog to init
 * @name: the name of the dog
 * @owner: owner's name
 * @age: the age of the dog
 *
 * Return: void.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
