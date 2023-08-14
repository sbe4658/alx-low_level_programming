#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: a struct pointer.
 * @name: the name of the dog.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			exit(-1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
