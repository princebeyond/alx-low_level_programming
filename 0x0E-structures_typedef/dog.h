#include <stdio.h>
/**
 * struct dog - type structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
