#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - about to free some bit***hees
 * @d: point to e'm bitc**es
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
