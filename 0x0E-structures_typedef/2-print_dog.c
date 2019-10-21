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
  if (d == NULL)
    printf("\n");

  if (d->name == NULL)
    printf("(nil)\n");
  else
    printf("%s\n", d->name);

  if (d->age == '\0')
    printf("(nil)\n");
  else
    printf("%f\n", d->age);

  if (d->owner == NULL)
    printf("(nil)\n");
  else
    printf("%s\n", d->owner);
}
