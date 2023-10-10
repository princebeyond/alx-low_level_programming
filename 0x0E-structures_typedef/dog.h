#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - type structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif