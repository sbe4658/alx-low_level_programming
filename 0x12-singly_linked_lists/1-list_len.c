#include "lists.h"
/**
 * list_len - computes the length of a singly linked list.
 * @h: the head of the list_t list.
 *
 * Return: the number nodes printed.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *tmp;

	while (h != NULL)
	{
		tmp = h;
		h = tmp->next;
		n++;
	}
	return (n);
}
