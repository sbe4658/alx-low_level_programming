#include "lists.h"
/**
 * dlistint_len - computes the length of a doubly linked list.
 * @h: the head node of the list.
 *
 * Return: The length.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
