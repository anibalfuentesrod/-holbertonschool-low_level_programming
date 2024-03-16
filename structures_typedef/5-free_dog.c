#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - the name of function
 * @d: this is where the structure of dog is save in this pointer d
 * Return: the pointer i think............right?
**/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
