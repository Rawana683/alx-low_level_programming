#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - entry point
 * @d : var to use
 * Description : "free all dogs"
 * Return: 0.
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
