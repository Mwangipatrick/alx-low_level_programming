#include <stdlib.h>
#include "dog.h"

/**
 * free_dog- program that frees a dog
 *@d: structure pointer
 *Return : void
 */

void free_dog(dog_t *d)
{
	if (d == 0)
	return;

   	free(d->name);
	free(d->owner);
	free(d);
}

