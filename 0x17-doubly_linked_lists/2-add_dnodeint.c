#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginnig of dlistint_t list.
 * @head: the head node.
 * @n: elments/integer.
 *
 * Return: The new node, otherwise NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
