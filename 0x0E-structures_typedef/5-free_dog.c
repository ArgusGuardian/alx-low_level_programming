#include "dog.h"
/**
 * new_dog - create new structure type dog_t
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: return strucutre type dog_t
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
