#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to new allocated string
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	if (name == NULL)
		d->name = NULL;
	else
		d->name = malloc((strlen(name) + 1) * sizeof(char));

	if (owner == NULL)
		d->owner = NULL;
	else
		d->owner = malloc((strlen(owner) + 1) * sizeof(char));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
	return (d);
}
