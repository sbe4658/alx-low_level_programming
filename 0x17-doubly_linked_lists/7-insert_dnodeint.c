#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given index.
 * @h: the head node.
 * @idx: the index.
 * @n: integer/element of the new node.
 *
 * Return: The address of the new node, otherwise NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, u_int idx, int n)
{
	dlistint_t *curr = *h, *new;

	if (!curr && idx > 0)
		return (NULL);
	if (idx)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		for (; idx; idx--)
		{
			if (!curr)
			{
				free(new);
				return (NULL);
			}
			curr = curr->next;
		}
		curr->prev->next = new;
		new->prev = curr->prev;
		curr->prev = new;
		new->next = curr;
	}
	else
		new = add_dnodeint(h, n);
	return (new);
}
