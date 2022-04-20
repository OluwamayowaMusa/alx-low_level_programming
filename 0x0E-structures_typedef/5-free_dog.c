#include "dog.h"

/**
 * free_dog - Free memmory of structure
 * @d: Pointer to structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
