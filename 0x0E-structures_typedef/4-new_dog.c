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
	char *n, *o;
	int len1, len2;

	if (dawg == NULL)
	{
		free(dawg);
		return (NULL);
	}
	len1 = _strlen(name);
	n = malloc(sizeof(char) * len1);
	len2 = _strlen(owner);
	o = malloc(sizeof(char) * len2);
	if (n == NULL || o == NULL)
	{
		free(dawg->name);
		free(dawg->owner);
		free(dawg);
		return (NULL);
	}
	dawg->name = _strcpy(n, name);
	dawg->age = age;
	dawg->owner = _strcpy(o, owner);
	return (dawg);
}
/**
 * _strcpy - copies a string.
 * @dest: destination.
 * @src: source.
 *
 * Return: Nothing.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * _strlen - gets string length.
 * @s: a pointer to a string.
 *
 * Return: the length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	if (s != NULL)
	{
		while (s[len] != '\0')
			len++;
	}
	return (len);
}
