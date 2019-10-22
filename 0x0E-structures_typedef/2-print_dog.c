#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function that prints a dog. That is, its name, age, and owner
 * @d: Contains a struct holding various variables
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);

		printf("Age: %f\n", d->age);

		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
