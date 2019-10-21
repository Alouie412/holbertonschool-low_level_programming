#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
	if(name != NULL)
		d->name = name;

	if(age != '\0')
		d->age = age;

	if(owner != NULL)
		d->owner = owner;
}
