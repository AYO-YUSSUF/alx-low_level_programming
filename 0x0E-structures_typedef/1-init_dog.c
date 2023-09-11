#include "dog.h"

/**
 * init_dog - initializes type dog structure
 * @d: pointer
 * @name: name of the dog
 * @age: dog's age
 * @owner: owner of the dog
 *
 * Return: void
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
