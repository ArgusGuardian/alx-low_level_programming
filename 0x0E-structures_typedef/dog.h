#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - structure of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: structure that include the dog name age and owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
