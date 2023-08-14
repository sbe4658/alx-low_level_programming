#include "dog.h"
/**
 * print_dog - prints a struct dog.
 * @d: struct dog type.
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	check_for_null(d);
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
/**
 * check_for_null - checks wther an element of struct d is null
 * and assign is to nil.
 * @d: struct dog type
 *
 * Return: Nothing.
 */
void check_for_null(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
}
