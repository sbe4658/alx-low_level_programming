#include "lists.h"
/**
 * listint_len - computes all elements of listint_t list.
 * @h: the head of the list.
 *
 * Return: the number of nodes (aka: number of elements).
 */
size_t listint_len(const listint_t *h)
{
	ui_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
