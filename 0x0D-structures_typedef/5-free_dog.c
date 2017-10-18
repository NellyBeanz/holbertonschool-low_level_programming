#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog(allocated memory)
 * @d: pointer to dog_t which is a type of struct dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
