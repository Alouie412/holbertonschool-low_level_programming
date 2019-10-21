#include "dog.h"

/**
 * init_dog - Program that initializes certain variables
 * @d: Struct for initializaiton
 * @name: Holds name char array
 * @age: Holds age float value
 * @owner: Holds owner name char array
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
