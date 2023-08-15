#ifndef DODLE_H
#define DODLE_H

/**
 * struct dog - dog's data for sorting i guess!
 * @name: the name of the dog.
 * @age: the age of the dog
 * @owner: julein barbier don't ask me why.
 *
 * Description: This strcut is for the first task of this
 *		project. The real question is
 *		Wat da dawg doin'?!
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;

/* Functions section */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *);
void check_for_null(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *d);

/* Headers section */
#include <stdlib.h>
#include <stdio.h>

#endif
