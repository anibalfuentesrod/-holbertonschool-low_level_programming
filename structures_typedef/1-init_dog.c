#include "dog.h"
#include <stdio.h>
/**
 * init_dog - the name of function
 * dog - the dog ajajaj
 * @d: the structure
 * @name:name of aaaaa i dont know bro
 * @age: age of...you know
 * @owner: the owner
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;

	d->age = age;

	d->owner = owner;
}
