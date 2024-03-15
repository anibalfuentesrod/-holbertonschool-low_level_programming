#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strncpy - the name of function
 * @dest: the destination
 * @src: the source that you whant to copy
 * Return: dest
**/
char *_strncpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
		return (dest);
}
/**
 * _strlen - this is to copy the string
 *
 * @s: the variable name
 * Return: i
**/
int _strlen(char *s)
{
	int i;
		for (i = 0; s[i] != '\0'; i++)
		{
		}
		return (i);
}
/**
 * new_dog - the name of function
 * @name: the name of dog
 * @age: age of dog
 * @owner: the owner of dog
 * Return: new_dog
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;

	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	len_name = _strlen(name);

	new_dog->name = malloc(len_name * sizeof(char));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	len_owner = _strlen(owner);

	new_dog->owner = malloc(len_owner * sizeof(char));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	_strncpy(new_dog->name, name);
	_strncpy(new_dog->owner, owner);

	return (new_dog);
}
