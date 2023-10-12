#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list.
 * @h: the head node.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *tmp;

	while (h)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
}
