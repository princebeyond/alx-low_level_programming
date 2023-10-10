#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a varable to struct dog
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner or dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
