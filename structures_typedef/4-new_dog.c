#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - the name
 * @name: name duhh
 * @age: age duhhh
 * @owner: owner.....duhh
 * Return: ptr
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0, owner_len = 0, i;

	dog_t *fiona;

	while (name[name_len++])
		;
	while (owner[owner_len++])
		;
			fiona = malloc(sizeof(dog_t));
				if (fiona == NULL)
					return (NULL);

	fiona->name = malloc(name_len * sizeof(fiona->name));
		if (fiona == NULL)
			return (NULL);

	for (i = 0; i < name_len; i++)
		fiona->name[i] = name[i];

			if (fiona->name == NULL)
			{
				free(fiona);
				return (NULL);
			}

		fiona->age = age;

	fiona->owner = malloc(owner_len * sizeof(fiona->owner));
		if (fiona == NULL)
			return (NULL);

		for (i = 0; i < owner_len; i++)
			fiona->owner[i] = owner[i];

		if (fiona->owner == NULL)
		{
			free(fiona->name);
			return (NULL);
		}
	return (fiona);
}
