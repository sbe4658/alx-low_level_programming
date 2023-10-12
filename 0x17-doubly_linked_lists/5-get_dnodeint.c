#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node.
 * @h: the head node.
 * @idx: the index of the node starting with 0.
 *
 * Return: the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int idx)
{
	for (; idx; idx--)
	{
		if (!h)
			return (NULL);
		h = h->next;
	}
	return (h);
}
