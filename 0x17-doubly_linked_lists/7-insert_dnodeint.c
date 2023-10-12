#include "lists.h"
/**
 * insert_dnodeint_at_index - inserst a node at given index.
 * @h: the head node.
 * @idx: the index.
 * @n: data.
 *
 * Return: The address of the inserted node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *ltmp;

	ltmp = malloc(sizeof(dlistint_t));
	if (!ltmp)
		return (NULL);
	ltmp->n = n;
	if (tmp)
	{
		for (; idx; idx--)
			tmp = tmp->next;
		ltmp->prev = tmp->prev;
		ltmp->next = tmp;
		tmp->prev = ltmp;
	}
	else
	{
		ltmp->next = NULL;
		ltmp->prev = NULL;
		*h = ltmp;
	}
	return (ltmp);
}
