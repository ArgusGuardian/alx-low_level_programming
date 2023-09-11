#include "dog.h"
/**
 * init_dog - initialize dog structure
 * @d: structure type dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */
void print_dog(struct dog *d)
{
	if (!d)
		exit(NULL);
	printf("Name: %s", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner != NULL ? d->owner : "(nil)");
}
