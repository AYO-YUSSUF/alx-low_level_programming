#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 *
 * Return: new dog pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int dn, on, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (dn = 0; name[dn]; dn++)
		;
	dn++;
	dog->name = malloc(dn * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; x < dn; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (on = 0; owner[on]; on++)
		;
	on++;
	dog->owner = malloc(on * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < on; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
