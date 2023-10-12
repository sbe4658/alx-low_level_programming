#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of the list
 * @h: the head node.
 * @n: data.
 *
 * Return: The address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *tmp = *h, *ltmp;

	ltmp = malloc(sizeof(dlistint_t));
	if (!ltmp)
		return (NULL);
	ltmp->n = n;
	ltmp->next = NULL;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		ltmp->pev = tmp;
	}
	else
	{
		ltmp->prev = NULL;
		*h = ltmp;
	}
	return (ltmp);
}
