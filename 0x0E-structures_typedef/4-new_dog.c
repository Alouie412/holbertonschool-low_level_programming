#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Gets the length of the input string
 * @str: String input
 * Return: Number of indexes in a string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * _strcpy: Copies the string from src to dest
 * @dest: String to be copied over
 * @src: String to copy from
 * Return: Pointer to beginning of string
 */
char _strcpy(char *dest, char *src)
{
	char temp;
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * new_dog - Program that creates a new dog. That is, creates a new struct
 * @name: Stores the name char array
 * @age: Stores the age float
 * @owner: Stores the owner char array
 * Return: Pointer to the newly created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = NULL;
	char *newName = NULL, *newOwner = NULL;
	int newNameLen, newOwnerLen;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newNameLen = _strlen(name);
	newOwnerLen = _strlen(owner);

	newName = malloc((newNameLen + 1) * sizeof(char));
	newOwner = malloc((newOwnerLen + 1) * sizeof(char));

	if (newName == NULL || newOwner == NULL)
	{
		free(newName);
		free(newOwner);
		free(newDog);
		return (NULL);
	}

	newDog->name = _strcpy(newName, name);
	newDog->age = age;
	newDog->owner = _strcpy(newOwner, owner);

	return (newDog);
}
