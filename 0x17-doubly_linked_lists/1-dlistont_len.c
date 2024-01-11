#include "lists.h"
/**
 * dlistint_len -  computes the number of elements in a dlistint_t list.
 * @h: points to the head node.
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	u_int n = 0;

	for (; h; n++)
		h = h->next;
	return (n);
}
