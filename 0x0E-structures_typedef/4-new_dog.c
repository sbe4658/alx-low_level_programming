#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: a newly created dog_t pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg = malloc(sizeof(dog_t));

	if (dawg == NULL)
		return (NULL);
	dawg->name = name;
	dawg->age = age;
	dawg->owner = owner;
	return (dawg);
}
