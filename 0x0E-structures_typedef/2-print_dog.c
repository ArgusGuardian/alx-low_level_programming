#include "dog.h"
/**
 * print_dog - prints dog structure
 * @d: structure type dog
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
