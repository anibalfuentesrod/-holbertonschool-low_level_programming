#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the name of structure
 * @name: the name of dog
 * @age: age of dog duhhh
 * @owner: the owner of the dug obvio cb
 * @d: the pointer that has store the structure
**/
struct dog
{
	char *name;

	float age;

	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
