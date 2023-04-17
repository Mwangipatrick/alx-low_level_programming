#include <stdlib.h>
#include "dog.h"

/**
 * init_dog- function that initialize a variable
 * @d: structure pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: who takes care of the dog
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
