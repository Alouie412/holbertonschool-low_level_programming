#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Program that creates a new dog. That is, creates a new struct
 * @name: Stores the name char array
 * @age: Stores the age float
 * @owner: Stores the owner char array
 * Return: Pointer to the new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *ptr = NULL;

  ptr = malloc(sizeof(name) + sizeof(age) + sizeof(owner));

  if (ptr == NULL)
    return (NULL);

  ptr->name = name;
  ptr->age = age;
  ptr->owner = owner;

  return (ptr);
}
