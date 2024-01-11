#include "lists.h"
/**
 * add_dnodeint_end - adds node a node at the end of dlistint_t list.
 * @head: the head node.
 * @n: integer.
 *
 * Return: the address of the new node, otherwise NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (h)
	{
		while (h->next)
			h = h->next;
		h->next = new;
		new->prev = h;
	}
	else
		*head = new;
	return (new);
}
