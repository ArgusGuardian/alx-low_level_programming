#include "dog.h"
/**
 * init_dog - initialize dog structure
 * @d: structure type dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		d = malloc(sizeof(struct dog));
	}

	d->age = age;
	d->name = name;
	d->owner = owner;
}
