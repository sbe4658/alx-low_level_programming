#include "lists.h"
/**
 * add_dnodeint - add a node at the begenning of doubly linked list.
 * @h: the head node.
 * @n: data.
 *
 * Return: the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);
	tmp->next = *h;
	tmp->prev = NULL;
	if (*h)
		(*h)->prev = tmp;
	tmp->n = n;
	*h = tmp;
	return (tmp);
}
